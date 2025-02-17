/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:36:03 by besalort          #+#    #+#             */
/*   Updated: 2025/02/17 18:48:35 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

int main ()
{
	try { //SHRUBBERY CREATION TEST
		
		Bureaucrat boss("Ainz Ool Gown", 1);
		Bureaucrat second("Albedo", 2);
		Bureaucrat third("Climb", 150);
		ShrubberyCreationForm paper("Home");
		std::cout << BLUE << boss << std::endl;
		std::cout << second << std::endl;
		std::cout << third << std::endl;
		std::cout << paper << WHITE << std::endl;
		boss.executeForm(paper);
		third.signForm(paper);
		boss.signForm(paper);
		third.executeForm(paper);
		boss.executeForm(paper);
	} catch (std::exception &e){
		std::cerr << ROSE << e.what() << WHITE << std::endl;
	}



	std::cout << GREEN << "///////////////////////////////////////" << WHITE << std::endl;

	try { //ROBOTOMIZE TEST
		
		Bureaucrat boss("Ainz Ool Gown", 1);
		Bureaucrat second("Albedo", 2);
		Bureaucrat third("Climb", 150);
		RobotomyRequestForm paper("RandomGuy");
		std::cout << BLUE << boss << std::endl;
		std::cout << second << std::endl;
		std::cout << third << std::endl;
		std::cout << paper << WHITE << std::endl;
		boss.executeForm(paper);
		third.signForm(paper);
		boss.signForm(paper);
		third.executeForm(paper);
		boss.executeForm(paper);
	} catch (std::exception &e){
		std::cerr << ROSE << e.what() << WHITE << std::endl;
	}

	
    return 0;
}

