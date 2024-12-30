/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:27:24 by besalort          #+#    #+#             */
/*   Updated: 2024/12/30 15:58:18 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP

#define SHRUBBERY_CREATION_FORM_HPP
#include "AForm.hpp"
#include <fstream>

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
		void	createFile() const;
		void	fillFile(std::ofstream &file) const;
};

#endif