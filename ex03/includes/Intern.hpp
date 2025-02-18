/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:52:50 by besalort          #+#    #+#             */
/*   Updated: 2025/02/18 16:57:34 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.cpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	private :

	public :
		Intern();
		~Intern();
		Intern(const Intern &i);
		Intern &operator=(const Intern &i);

		void	makeForm(std::string fName, std::string target) const;
};

#endif