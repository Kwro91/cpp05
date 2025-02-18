/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:39:37 by besalort          #+#    #+#             */
/*   Updated: 2025/02/18 15:36:00 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("null"){
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
	
}

PresidentialPardonForm::~PresidentialPardonForm(){
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f) : AForm(f.getName(), f.getToSign(), f.getToExec()), _target(f.getTarget()){
	
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &f){
	_target = f.getTarget();
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const {
	return (_target);
}

void	PresidentialPardonForm::doExec() const {
	std::cout << ROSE << _target << " has been pardonned by Zaphod Beeblebrox." << WHITE << std::endl;
}