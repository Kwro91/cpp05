/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:35:28 by besalort          #+#    #+#             */
/*   Updated: 2024/11/14 13:42:49 by besalort         ###   ########.fr       */
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

    protected:

    public:
		Bureaucrat(const std::string name, unsigned int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &bureaucrat);
		Bureaucrat &operator=(const Bureaucrat &bureaucrat);

		// class GradeTooHigh : std::exception {

		// };
};

#endif
