/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:52:14 by besalort          #+#    #+#             */
/*   Updated: 2025/02/18 17:03:17 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(){
	
}

Intern::~Intern(){
	
}

Intern::Intern(const Intern &i){
	(void)i;
}

Intern &Intern::operator=(const Intern &i){
	(void)i;
	return (*this);
}

void	makeForm(std::string fName, std::string target){
	try {
		
	}catch (std::exception &e){
		std::cerr << YELLOW << e.what() << std::endl;
	}
}