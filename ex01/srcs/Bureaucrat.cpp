/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:35:13 by besalort          #+#    #+#             */
/*   Updated: 2024/12/12 17:51:48 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp" 

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Exeption: Bureaucrat grade too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Exeption: Bureaucrat grade too low!");
}

//////////////////////////////////////////////////////////////////////////////////////////////////

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {
	    std::cout << GREEN << _name << " Bureaucrat grade " << _grade << " have been created." << WHITE << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade) {
	if (grade > MAXGRADE)
		throw GradeTooLowException();
    std::cout << GREEN << _name << " Bureaucrat grade " << _grade << " have been created." << WHITE << std::endl;
}

Bureaucrat::~Bureaucrat() {
        std::cout << RED << _name << " Bureaucrat grade " << _grade << " destroyed." << WHITE << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name), _grade(bureaucrat._grade){
	    std::cout << GREEN << _name << " Bureaucrat grade " << _grade << " have been created by copy." << WHITE << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat){
	if (this != &bureaucrat)
		_grade = bureaucrat._grade;
	return (*this);
}

unsigned int	Bureaucrat::getGrade() const{
	return(_grade);
}

std::string		Bureaucrat::getName() const{
	return(_name);
}

void	Bureaucrat::upGrade(){ //grade 1 -> grade 0
	if (_grade <= MINGRADE)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::downGrade(){ //grade 1 -> grade 2
	if (_grade >= MAXGRADE)
		throw GradeTooLowException();
	_grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &staff){
	out << BLUE << staff.getName() << ", grade: " << staff.getGrade(); 
	return (out);
}
