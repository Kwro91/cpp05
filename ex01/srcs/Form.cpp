/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:06:55 by besalort          #+#    #+#             */
/*   Updated: 2024/12/12 19:07:35 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

const char	*Form::GradeTooHighException::what() const throw(){
	return ("Exeption: Form grade too high!");
}

const char	*Form::GradeTooLowException::what() const throw(){
	return ("Exeption: Form grade too low!");
}

/////////////////////////////////////////////////////

Form::Form(std::string name, unsigned int toSign, unsigned int toExec) : _name(name), _toSign(toSign), _toExec(toExec){
	_sign = false;
	if (toSign > MAXGRADE || toExec > MAXGRADE)
		throw GradeTooLowException();
	std::cout << GREEN << _name << " Form grade to sign (" << _toSign << ") and to execute (" << _toExec << ") have been created." << WHITE << std::endl;
}

Form::~Form(){
		std::cout << RED << _name << " Form grade to sign (" << _toSign << ") and to execute (" << _toExec << ") is destroyed." << WHITE << std::endl;
}

Form::Form(const Form &form) : _name(form._name), _toSign(form._toSign), _toExec(form._toExec){
		_sign = form._sign;
		std::cout << GREEN << _name << " Form grade to sign (" << _toSign << ") and to execute (" << _toExec << ") have been created by copy." << WHITE << std::endl;
}

Form &Form::operator=(const Form &form) {
	if (this != &form)
	{
		_name = form._name;
		_sign = form._sign;
	}
	return (*this);
}

std::string	Form::getName() const {
	return (_name);
}

unsigned int Form::getToSign() const {
	return (_toSign);
}

unsigned int Form::getToExec() const {
	return (_toExec);
}

std::string Form::getStatus() const {
	if (_sign)
		return ("signed");
	return ("unsigned");
}

void	Form::beSigned(const Bureaucrat &b){
	if (_sign)
		return;
	if (b.getGrade() <= _toSign)
		_sign = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &form){
	out << BLUE << form.getName() << " status " << form.getStatus() << ", to sign (" << form.getToSign() << ") and to execute (" << form.getToExec() << ")";
	return (out);	
}