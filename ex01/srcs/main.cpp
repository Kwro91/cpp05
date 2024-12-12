/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:36:03 by besalort          #+#    #+#             */
/*   Updated: 2024/12/12 19:32:36 by besalort         ###   ########.fr       */
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
	//////////////////////////////////////////////////////// HIGH
	// try {
	// 	boss.upGrade();
	// 	boss.upGrade();
	// }catch (Bureaucrat::GradeTooHighException &e){
	// 	std::cerr << YELLOW << e.what() << WHITE << std::endl;
	// }catch (Bureaucrat::GradeTooLowException &e){ //not used
	// 	std::cerr << YELLOW << e.what() << WHITE << std::endl;
	// }
	////////////////////////////////////////////////////////// LOW
	// try {
	// 	third.downGrade();
	// }catch (Bureaucrat::GradeTooHighException &e){ //not used
	// 	std::cerr << YELLOW << e.what() << WHITE << std::endl;
	// }catch (Bureaucrat::GradeTooLowException &e){
	// 	std::cerr << YELLOW << e.what() << WHITE << std::endl;
	// }
	third.signForm(paper);
	boss.signForm(paper);
	second.signForm(paper);
	std::cout << boss << std::endl;
	std::cout << second << std::endl;
	std::cout << third << std::endl;
    return 0;
}