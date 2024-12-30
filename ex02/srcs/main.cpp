/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:36:03 by besalort          #+#    #+#             */
/*   Updated: 2024/12/13 16:24:33 by besalort         ###   ########.fr       */
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
	std::cout << boss << std::endl;
	std::cout << second << std::endl;
	std::cout << third << std::endl;


    std::cout << "                                             ." << std::endl;
    std::cout << "                                              .         ;" << std::endl;
    std::cout << "                 .              .              ;%     ;;   " << std::endl;
    std::cout << "                   ,           ,                :;%  %;   " << std::endl;
    std::cout << "                    :         ;                   :;%;'     .,   " << std::endl;
    std::cout << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
    std::cout << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    std::cout << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
    std::cout << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    std::cout << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    std::cout << "                 `:;%.    ;%%. %@;        %; ;@%;'%'" << std::endl;
    std::cout << "                    `:%;.  :;bd%;          %;@%;" << std::endl;
    std::cout << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
    std::cout << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
    std::cout << "                          `@%%. `@%%    ;@@%;        " << std::endl;
    std::cout << "                            ;@%. :@%%  %@@%;       " << std::endl;
    std::cout << "                              %@bd%%%bd%%:;     " << std::endl;
    std::cout << "                                #@%%%%%:;;" << std::endl;
    std::cout << "                                %@@%%%::;" << std::endl;
    std::cout << "                                %@@@%(o);  . '         " << std::endl;
    std::cout << "                                %@@@o%;:(.,'         " << std::endl;
    std::cout << "                            `.. %@@@o%::;         " << std::endl;
    std::cout << "                               `)@@@o%::;         " << std::endl;
    std::cout << "                                %@@(o)::;        " << std::endl;
    std::cout << "                               .%@@@@%::;         " << std::endl;
    std::cout << "                               ;%@@@@%::;.          " << std::endl;
    std::cout << "                              ;%@@@@%%:;;;. " << std::endl;
    std::cout << "                          ...;%@@@@@%%:;;;;,..  " << std::endl;
    

	
    return 0;
}