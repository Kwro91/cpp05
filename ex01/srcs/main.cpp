/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:36:03 by besalort          #+#    #+#             */
/*   Updated: 2025/03/21 12:09:36 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main ()
{
	Bureaucrat boss("Ainz Ool Gown", 1);
    Bureaucrat second("Albedo", 2);
	Bureaucrat third("Climb", 150);
	Form paper("Magic caster", 2, 1);
	try {
		std::cout << "Creating impossible paper (541, 480)" << std::endl;
		Form no("Impossible", 541, 480);
	}
	catch (std::exception &e){
		std::cerr << YELLOW << e.what() << std::endl;
	}
	std::cout << CYAN << paper << WHITE << std::endl;
	third.signForm(paper);
	boss.signForm(paper);
	second.signForm(paper);
	std::cout << CYAN << paper << WHITE << std::endl;
	std::cout << boss << std::endl;
	std::cout << second << std::endl;
	std::cout << third << std::endl;
    return 0;
}