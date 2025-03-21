/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:39:37 by besalort          #+#    #+#             */
/*   Updated: 2025/03/21 12:53:38 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "null"){
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5, target){
	
}

PresidentialPardonForm::~PresidentialPardonForm(){
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f){
	*this = f;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &f){
	(void)f;
	return (*this);
}

void	PresidentialPardonForm::doExec() const {
	std::cout << getTarget() << " has been pardonned by Zaphod Beeblebrox." << std::endl;
}