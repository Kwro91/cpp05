/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:36:03 by besalort          #+#    #+#             */
/*   Updated: 2025/03/21 12:51:49 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main ()
{
	std::cout << YELLOW << "//////////////////////////////////////////////////////////////////////////////////////////////////" << WHITE << std::endl;
	std::cout << YELLOW << "/////////////////SHRUBBERYCREATION///////////////////////////////////////////////////////////////" << WHITE << std::endl;
	std::cout << YELLOW << "//////////////////////////////////////////////////////////////////////////////////////////////////" << WHITE << std::endl;
	try { //SHRUBBERY CREATION TEST
		
		Bureaucrat boss("Ainz Ool Gown", 1);
		Bureaucrat second("Albedo", 6);
		Bureaucrat third("Climb", 150);
		ShrubberyCreationForm paper("Home");
		std::cout << BLUE << boss << std::endl;
		std::cout << second << std::endl;
		std::cout << third << WHITE << std::endl;
		std::cout << paper << std::endl;
		boss.executeForm(paper);
		third.signForm(paper);
		boss.signForm(paper);
		third.executeForm(paper);
		boss.executeForm(paper);
	} catch (std::exception &e){
		std::cerr << ROSE << e.what() << WHITE << std::endl;
	}



	std::cout << YELLOW << "//////////////////////////////////////////////////////////////////////////////////////////////////" << WHITE << std::endl;
	std::cout << YELLOW << "/////////////////ROBOTOMISATION///////////////////////////////////////////////////////////////" << WHITE << std::endl;
	std::cout << YELLOW << "//////////////////////////////////////////////////////////////////////////////////////////////////" << WHITE << std::endl;
	try { //ROBOTOMIZE TEST
		
		Bureaucrat boss("Ainz Ool Gown", 1);
		Bureaucrat second("Albedo", 6);
		Bureaucrat third("Climb", 150);
		RobotomyRequestForm paper("RandomGuy");
		std::cout << BLUE << boss << std::endl;
		std::cout << second << std::endl;
		std::cout << third << WHITE  << std::endl;
		std::cout << paper << std::endl;
		boss.executeForm(paper); //have to be signed
		third.signForm(paper); //cant sign
		boss.signForm(paper); //sign
		third.executeForm(paper); //cant execute
		boss.executeForm(paper); //execute
	} catch (std::exception &e){
		std::cerr << ROSE << e.what() << WHITE << std::endl;
	}

	std::cout << YELLOW << "//////////////////////////////////////////////////////////////////////////////////////////////////" << WHITE << std::endl;
	std::cout << YELLOW << "/////////////////PRESIDENTIALPARDON///////////////////////////////////////////////////////////////" << WHITE << std::endl;
	std::cout << YELLOW << "//////////////////////////////////////////////////////////////////////////////////////////////////" << WHITE << std::endl;

	
	
	try { //PRESIDENTIAL PARDON TEST
		
		Bureaucrat boss("Ainz Ool Gown", 1);
		Bureaucrat second("Albedo", 6);
		Bureaucrat third("Climb", 150);
		PresidentialPardonForm paper("RandomGuy");
		std::cout << BLUE << boss << std::endl;
		std::cout << second << std::endl;
		std::cout << third << WHITE  << std::endl;
		std::cout << paper << std::endl;
		second.executeForm(paper); //have to be signed
		third.signForm(paper); //cant sign
		second.signForm(paper); //sign
		second.executeForm(paper); //cant execute
		boss.executeForm(paper); //execute
	} catch (std::exception &e){
		std::cerr << ROSE << e.what() << WHITE << std::endl;
	}
    return 0;
}

