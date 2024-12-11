/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:35:13 by besalort          #+#    #+#             */
/*   Updated: 2024/12/11 21:21:05 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp" 

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade){
    std::cout << GREEN << _name << " Bureaucrat grade " << _grade << " have been created." << WHITE << std::endl;
}

Bureaucrat::~Bureaucrat() {
        std::cout << RED << _name << " Bureaucrat grade " << _grade << " destroyed." << WHITE << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name), _grade(bureaucrat._grade){
	
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat){
	if (this != &bureaucrat)
		_grade = bureaucrat._grade;
	return (*this);
}

void	Bureaucrat::setGrade(unsigned int grade){
	try
	{
		if (grade > 150)
			throw GradeTooHighException();
		else if (grade == 0)
			throw GradeTooLowException();
		
	}catch (const GradeTooHighException &e){
		std::cerr << YELLOW << "Error: grade too high on " << this->getName() << " (" << grade << ")" << WHITE << std::endl;
		return ;
	}catch (const GradeTooLowException &e){
		std::cerr << YELLOW << "Error: grade too low on " << this->getName() << " (" << grade << ")" << WHITE << std::endl;
		return ;
	}
	_grade = grade;
}

unsigned int	Bureaucrat::getGrade() const{
	return(_grade);
}

std::string		Bureaucrat::getName() const{
	return(_name);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &staff){
	out << BLUE << staff.getName() << ", grade: " << staff.getGrade() << std::endl; 
	return (out);
}
