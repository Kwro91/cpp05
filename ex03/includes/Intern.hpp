/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:52:50 by besalort          #+#    #+#             */
/*   Updated: 2025/02/18 18:43:35 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	private :

	public :
		Intern();
		~Intern();
		Intern(const Intern &i);
		Intern &operator=(const Intern &i);

		AForm	*makeForm(std::string fName, std::string target);
};

std::ostream &operator<<(std::ostream &out, const Intern &i);

#endif