/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:27:24 by besalort          #+#    #+#             */
/*   Updated: 2024/12/13 16:36:23 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP

#define SHRUBBERY_CREATION_FORM_HPP
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		const std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &f);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &f);

		void	execute(Bureaucrat const &executor) const;
		void	createFile();
};

#endif