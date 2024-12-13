/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:36:03 by besalort          #+#    #+#             */
/*   Updated: 2024/12/13 14:09:11 by besalort         ###   ########.fr       */
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
	third.signForm(paper);
	boss.signForm(paper);
	second.signForm(paper);
	std::cout << boss << std::endl;
	std::cout << second << std::endl;
	std::cout << third << std::endl;
    return 0;
}