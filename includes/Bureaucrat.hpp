/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:35:28 by besalort          #+#    #+#             */
/*   Updated: 2024/12/12 16:40:37 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <exception>
#include "Color.hpp"

class Bureaucrat {
    private:
		const std::string _name;
		unsigned int _grade;
		unsigned int _maxGrade;
		unsigned int _minGrade;

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

		class GradeTooHighException : std::exception {
			public:
				const char	*what() const throw();
		};
		class GradeTooLowException : std::exception {
			public:
				const char	*what() const throw();
		};

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &staff);

#endif
