/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:28:36 by besalort          #+#    #+#             */
/*   Updated: 2025/03/21 12:40:37 by besalort         ###   ########.fr       */
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

AForm::AForm(): _toSign(0), _toExec(0){
	
}

AForm::AForm(std::string name, unsigned int toSign, unsigned int toExec, std::string target) : _name(name), _toSign(toSign), _toExec(toExec), _target(target){
	_sign = false;
	if (toSign > MAXGRADE || toExec > MAXGRADE)
		throw GradeTooLowException();
	std::cout << GREEN << _name << " AForm grade to sign (" << _toSign << ") and to execute (" << _toExec << ") have been created." << WHITE << std::endl;
}

AForm::~AForm(){
		std::cout << RED << _name << " AForm grade to sign (" << _toSign << ") and to execute (" << _toExec << ") is destroyed." << WHITE << std::endl;
}

AForm::AForm(const AForm &AForm) : _name(AForm._name), _toSign(AForm._toSign), _toExec(AForm._toExec), _target(AForm._target){
		_sign = AForm._sign;
		std::cout << GREEN << _name << " AForm grade to sign (" << _toSign << ") and to execute (" << _toExec << ") have been created by copy." << WHITE << std::endl;
}

AForm &AForm::operator=(const AForm &AForm) {
	if (this != &AForm)
		_sign = AForm._sign;
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
	return (_sign);
}

std::string AForm::getTarget() const {
	return (_target);
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
	if (_sign == false)
		throw FormNotSignedException();
	if (executor.getGrade() > _toExec)
		throw GradeTooLowException();
}

void		AForm::doExec() const{
	
}

void	AForm::execute(Bureaucrat const &executor) const{
	try{
		checkExecute(executor);
		std::cout << GREEN << "Bureaucrat " << executor.getName() << " executed " << this->getName() << WHITE << std::endl;
		doExec();
	}catch (const std::exception &e){
		std::cerr << ROSE << "Bureaucrat " << executor.getName() << " couldn't execute " << this->getName() << " because " << YELLOW << e.what() << WHITE << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const AForm &AForm){
	out << AForm.getName() << " status " << AForm.getStatus() << ", to sign (" << AForm.getToSign() << ") and to execute (" << AForm.getToExec() << ")";
	return (out);	
}