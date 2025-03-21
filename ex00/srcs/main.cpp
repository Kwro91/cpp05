/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:36:03 by besalort          #+#    #+#             */
/*   Updated: 2025/03/21 11:54:39 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp" 

int main ()
{
    Bureaucrat boss("Ainz Ool Gown", 1);
    Bureaucrat second("Albedo", 2);
	Bureaucrat third("Climb", 150);
	//////////////////////////////////////////////////////// HIGH
	try {
		std::cout << "Upgrading " << boss.getName() << std::endl;
		boss.upGrade();
		std::cout << "Upgrading " << third.getName() << std::endl;
		boss.upGrade();
	}catch (std::exception &e){
		std::cerr << YELLOW << e.what() << WHITE << std::endl;
	}
	////////////////////////////////////////////////////////// LOW
	try {
		std::cout << "Downgrading " << third.getName() << std::endl;
		third.downGrade();
	}catch (std::exception &e){
		std::cerr << YELLOW << e.what() << WHITE << std::endl;
	}
	////////////////////////////////////////////////////// IN CONSTRUCTOR
	try {
		std::cout << "Creating a rank 151 " << std::endl;
		Bureaucrat nope("Eduardo", 151);
	}catch (std::exception &e){
		std::cerr << YELLOW << e.what() << WHITE << std::endl;
	}

	////////////////////////////////////////////////////// RESULT & TEST GOOD
	std::cout << BLUE <<  boss << std::endl;
	std::cout << second << std::endl;
	std::cout << third << WHITE << std::endl;
	try {
		std::cout << "Downgrading " << second.getName() << std::endl;
		second.downGrade();
		std::cout << "Upgrading " << third.getName() << std::endl;
		third.upGrade();
	} catch (std::exception &e)
	{
		std::cerr << YELLOW << e.what() << WHITE << std::endl;
	}
	std::cout << BLUE <<  boss << std::endl;
	std::cout << second << std::endl;
	std::cout << third << WHITE << std::endl;
    return 0;
}