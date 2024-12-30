/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:33:46 by besalort          #+#    #+#             */
/*   Updated: 2024/12/13 16:41:25 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Asctree") {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {

}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s) : AForm(s.getName(), s.getToSign(), s.getToExec()), _target(s._target) {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s) {
	(void)s;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	(void)executor;
	throw FileNotOpenException();
}

void	ShrubberyCreationForm::createFile(){
	std::string fileName = _target + "_shruberry";
	std::ofstream file(fileName.c_str());
}