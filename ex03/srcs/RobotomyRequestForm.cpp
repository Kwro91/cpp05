/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:34:29 by besalort          #+#    #+#             */
/*   Updated: 2025/03/21 12:46:07 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "null"){

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45, target){

}

RobotomyRequestForm::~RobotomyRequestForm(){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f){
	*this = f;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &f) {
	(void)f;
	return (*this);
}

void	RobotomyRequestForm::doExec() const{
	try {
		std::srand(std::time(0)); //Genere un nombre en fct du temps actuel passe depuis 1970.
		std::cout << WHITE << "*Bzzzt crrrrr brrrrrrrrrrrrrr Bzzt Bzzt*" << std::endl;
		if (std::rand() % 2 == 0)
			std::cout << ROSE << getTarget() << " has been " << GREEN << "successfully" << ROSE << " robotomized" << WHITE << std::endl;
		else
			std::cout << ROSE << getTarget() << " has " << RED << "failed" << ROSE << " to be robotomize" << WHITE << std::endl;
	}catch (std::exception &e) {
		std::cerr << YELLOW << e.what() << std::endl;
	}
}
