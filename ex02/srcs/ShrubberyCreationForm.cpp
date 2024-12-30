/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:33:46 by besalort          #+#    #+#             */
/*   Updated: 2024/12/30 16:51:26 by besalort         ###   ########.fr       */
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

void	ShrubberyCreationForm::createFile() const {
	std::string fileName = _target + "_shruberry";
	std::ofstream file(fileName.c_str());
	if (!file)
		throw FileErrorException();
	fillFile(file);
}

void	ShrubberyCreationForm::fillFile(std::ofstream &file) const {
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
	
	file.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	checkExecute(executor);
	createFile();
}
