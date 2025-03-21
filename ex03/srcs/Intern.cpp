/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:52:14 by besalort          #+#    #+#             */
/*   Updated: 2025/03/21 13:02:38 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(){
	
}

Intern::~Intern(){
	
}

Intern::Intern(const Intern &i){
	*this = i;
}

Intern &Intern::operator=(const Intern &i){
	(void)i;
	return (*this);
}

AForm	*Intern::makeForm(std::string fName, std::string target){
	try {
		std::string fList[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
		int i = 0;
		for (; i < 3 && fList[i] != fName ; i++){}
		switch (i)
		{
			case 0 :
				std::cout << ROSE << "Intern has created " << fName << std::endl;
				return (new ShrubberyCreationForm(target));
			case 1 :
				std::cout << ROSE << "Intern has created " << fName << std::endl;
				return (new RobotomyRequestForm(target));
			case 2 :
				std::cout << ROSE << "Intern has created " << fName << std::endl;
				return (new PresidentialPardonForm(target));
			default :
				std::cerr << RED << "Intern couldn't create the form: " << fName << std::endl;
				return (NULL);
		}
	}catch (std::exception &e){
		std::cerr << YELLOW << e.what() << std::endl;
		return (NULL);
	}
}

std::ostream &operator<<(std::ostream &out, const Intern &i){
	(void)i;
	out << "Intern";
	return (out);
}
