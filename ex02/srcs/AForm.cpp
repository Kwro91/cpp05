/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:28:36 by besalort          #+#    #+#             */
/*   Updated: 2025/02/17 17:16:34 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

const char	*AForm::GradeTooHighException::what() const throw(){
	return ("Exception: AForm grade too high!");
}

const char	*AForm::GradeTooLowException::what() const throw(){
	return ("Exception: AForm grade too low!");
}
const char	*AForm::FormNotSignedException::what() const throw() {
	return ("Exception: AForm not signed!");
}
const char	*AForm::FileNotOpenException::what() const throw() {
	return ("Exception: File could not be opened!");
}
/////////////////////////////////////////////////////

AForm::AForm(std::string name, unsigned int toSign, unsigned int toExec) : _name(name), _toSign(toSign), _toExec(toExec){
	_sign = false;
	if (toSign > MAXGRADE || toExec > MAXGRADE)
		throw GradeTooLowException();
	std::cout << GREEN << _name << " AForm grade to sign (" << _toSign << ") and to execute (" << _toExec << ") have been created." << WHITE << std::endl;
}

AForm::~AForm(){
		std::cout << RED << _name << " AForm grade to sign (" << _toSign << ") and to execute (" << _toExec << ") is destroyed." << WHITE << std::endl;
}

AForm::AForm(const AForm &AForm) : _name(AForm._name), _toSign(AForm._toSign), _toExec(AForm._toExec){
		_sign = AForm._sign;
		std::cout << GREEN << _name << " AForm grade to sign (" << _toSign << ") and to execute (" << _toExec << ") have been created by copy." << WHITE << std::endl;
}

AForm &AForm::operator=(const AForm &AForm) {
	if (this != &AForm)
	{
		_name = AForm._name;
		_sign = AForm._sign;
	}
	return (*this);
}

std::string	AForm::getName() const {
	return (_name);
}

unsigned int AForm::getToSign() const {
	return (_toSign);
}

unsigned int AForm::getToExec() const {
	return (_toExec);
}

unsigned int AForm::getStatus() const {
	// if (_sign)
	// 	return ("signed");
	// return ("unsigned");
	return (_sign);
}

void	AForm::beSigned(const Bureaucrat &b){
	if (_sign)
		return;
	if (b.getGrade() <= _toSign)
		_sign = true;
	else
		throw GradeTooLowException();
}

void	AForm::checkExecute(Bureaucrat const &executor) const{
	if (executor.getGrade() > _toExec)
		throw GradeTooLowException();
	if (_sign == false)
		throw FormNotSignedException();
}

void		AForm::doExec() const{
	
}

void	AForm::execute(Bureaucrat const &executor) const{
	try{
		checkExecute(executor);
		doExec();
		std::cout << ROSE << "Bureaucrat " << executor.getName() << " executed " << this->getName() << WHITE << std::endl;
	}catch (const std::exception &e){
		std::cout << ROSE << "Bureaucrat " << executor.getName() << " couldn't execute " << this->getName() << " because " << YELLOW << e.what() << WHITE << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const AForm &AForm){
	out << AForm.getName() << " status " << AForm.getStatus() << ", to sign (" << AForm.getToSign() << ") and to execute (" << AForm.getToExec() << ")";
	return (out);	
}