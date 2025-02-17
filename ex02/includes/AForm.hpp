/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:02:40 by besalort          #+#    #+#             */
/*   Updated: 2025/02/17 17:02:25 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP

#define AFORM_HPP
#include "Color.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>
#include <fstream>

class Bureaucrat;

class AForm {
	private:
		std::string _name;
		bool _sign;
		const unsigned int _toSign;
		const unsigned int _toExec;
	public:
		AForm(std::string name, unsigned int toSign, unsigned int toExec);
		virtual ~AForm();
		AForm(const AForm &form);
		AForm &operator=(const AForm &form);

		std::string 		getName() const;
		unsigned int 		getToSign() const;
		unsigned int 		getToExec() const;
		unsigned int		getStatus() const;
		void				beSigned(const Bureaucrat &b);
		void 				checkExecute(Bureaucrat const &executor) const;
		void 				execute(Bureaucrat const &executor) const;
		virtual void		doExec() const = 0;

		class GradeTooHighException : public std::exception {
			public:
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char	*what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public:
				const char	*what()	const throw();
		};
		class FileNotOpenException : public std::exception{
		public:
			const char	*what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const AForm &f);

#endif