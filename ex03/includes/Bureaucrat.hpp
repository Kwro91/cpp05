/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:35:28 by besalort          #+#    #+#             */
/*   Updated: 2025/02/17 16:13:39 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <exception>
#include "Color.hpp"
#include "AForm.hpp"

#define MAXGRADE 150
#define MINGRADE 0

class AForm;

class Bureaucrat {
    private:
		const std::string _name;
		unsigned int _grade;

    protected:

    public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &bureaucrat);
		Bureaucrat &operator=(const Bureaucrat &bureaucrat);
		
		unsigned int	getGrade() const;
		std::string		getName() const;
		void			upGrade();
		void			downGrade();
		void			signForm(AForm &f) const;
		void			executeForm(AForm &f) const;

		class GradeTooHighException : public std::exception {
			public:
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char	*what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &staff);

#endif
