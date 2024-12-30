/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:36:03 by besalort          #+#    #+#             */
/*   Updated: 2024/12/30 17:07:24 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main ()
{
    Bureaucrat boss("Ainz Ool Gown", 1);
    Bureaucrat second("Albedo", 2);
	Bureaucrat third("Climb", 150);
	ShrubberyCreationForm paper;
	std::cout << BLUE << boss << std::endl;
	std::cout << second << std::endl;
	std::cout << third << WHITE << std::endl;
	second.executeForm(paper);
	boss.signForm(paper);
	third.executeForm(paper);
	boss.executeForm(paper);
    return 0;
}