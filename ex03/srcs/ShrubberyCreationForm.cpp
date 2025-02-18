/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:33:46 by besalort          #+#    #+#             */
/*   Updated: 2025/02/17 17:14:38 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Asctree") {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {

}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s) : AForm(s.getName(), s.getToSign(), s.getToExec()), _target(s._target) {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s) {
	(void)s;
	return (*this);
}

void	ShrubberyCreationForm::doExec() const{
	std::string fileName = _target + "_shrubbery";
	std::ofstream file(fileName.c_str());
	if (!file)
	throw FileNotOpenException();
	file << "                                             ." << std::endl;
    file << "                                              .         ;" << std::endl;
    file << "                 .              .              ;%     ;;   " << std::endl;
    file << "                   ,           ,                :;%  %;   " << std::endl;
    file << "                    :         ;                   :;%;'     .,   " << std::endl;
    file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
    file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
    file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    file << "                 `:;%.    ;%%. %@;        %; ;@%;'%'" << std::endl;
    file << "                    `:%;.  :;bd%;          %;@%;" << std::endl;
    file << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
    file << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
    file << "                          `@%%. `@%%    ;@@%;        " << std::endl;
    file << "                            ;@%. :@%%  %@@%;       " << std::endl;
    file << "                              %@bd%%%bd%%:;     " << std::endl;
    file << "                                #@%%%%%:;;" << std::endl;
    file << "                                %@@%%%::;" << std::endl;
    file << "                                %@@@%(o);  . '         " << std::endl;
    file << "                                %@@@o%;:(.,'         " << std::endl;
    file << "                            `.. %@@@o%::;         " << std::endl;
    file << "                               `)@@@o%::;         " << std::endl;
    file << "                                %@@(o)::;        " << std::endl;
    file << "                               .%@@@@%::;         " << std::endl;
    file << "                               ;%@@@@%::;.          " << std::endl;
    file << "                              ;%@@@@%%:;;;. " << std::endl;
    file << "                          ...;%@@@@@%%:;;;;,..  " << std::endl;
}
