/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:36:03 by besalort          #+#    #+#             */
/*   Updated: 2024/12/13 14:07:45 by besalort         ###   ########.fr       */
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
		boss.upGrade();
		boss.upGrade();
	}catch (std::exception &e){
		std::cerr << YELLOW << e.what() << WHITE << std::endl;
	}
	////////////////////////////////////////////////////////// LOW
	try {
		third.downGrade();
	}catch (std::exception &e){
		std::cerr << YELLOW << e.what() << WHITE << std::endl;
	}
	////////////////////////////////////////////////////// IN CONSTRUCTOR
	try {
		Bureaucrat nope("Eduardo", 151);
	}catch (std::exception &e){
		std::cerr << YELLOW << e.what() << WHITE << std::endl;
	}
	std::cout << boss << std::endl;
	std::cout << second << std::endl;
	std::cout << third << std::endl;
    return 0;
}