/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:02:40 by besalort          #+#    #+#             */
/*   Updated: 2025/03/21 12:13:41 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

#define FORM_HPP
#include "Color.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form {
	private:
		const std::string _name;
		bool _sign;
		const unsigned int _toSign;
		const unsigned int _toExec;
	public:
		Form(std::string name, unsigned int toSign, unsigned int toExec);
		~Form();
		Form(const Form &form);
		Form &operator=(const Form &form);

		std::string		getName() const;
		unsigned int	getToSign() const;
		unsigned int	getToExec() const;
		unsigned int	getStatus() const;
		void			beSigned(const Bureaucrat &b);

		class GradeTooHighException : public std::exception {
			public:
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char	*what() const throw();
		};
	
};

std::ostream &operator<<(std::ostream &out, const Form &f);

#endif