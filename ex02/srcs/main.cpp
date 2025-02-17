/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:36:03 by besalort          #+#    #+#             */
/*   Updated: 2025/02/17 17:14:53 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main ()
{
	try { //SHRUBBERY CREATION TEST
		
		Bureaucrat boss("Ainz Ool Gown", 1);
		Bureaucrat second("Albedo", 2);
		Bureaucrat third("Climb", 150);
		ShrubberyCreationForm paper;
		std::cout << BLUE << boss << std::endl;
		std::cout << second << std::endl;
		std::cout << third << std::endl;
		std::cout << paper << WHITE << std::endl;
		third.signForm(paper);
		boss.signForm(paper);
		third.executeForm(paper);
		boss.executeForm(paper);
	} catch (std::exception &e){
		std::cerr << ROSE << e.what() << WHITE << std::endl;
	}
    return 0;
}

