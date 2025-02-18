/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:40:36 by besalort          #+#    #+#             */
/*   Updated: 2025/02/18 14:55:37 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private :
		std::string _target;
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &f);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &f);

		std::string	getTarget() const;
		void		doExec() const;
};


#endif