//
// Created by Tadeusz Kondracki on 4/12/22.
//

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("unknown_shrubbery", 145, 137),
	_target("jardin")
{
	//default values
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &inst)
{
	*this = inst;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	_target = rhs._target;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name,
											 const std::string& target): Form(name, 145, 137)
{
	_target = target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::cout << "                                                         .\n"
				 "                                              .         ;  \n"
				 "                 .              .              ;%     ;;   \n"
				 "                   ,           ,                :;%  %;   \n"
				 "                    :         ;                   :;%;'     .,   \n"
				 "           ,.        %;     %;            ;        %;'    ,;\n"
				 "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
				 "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
				 "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
				 "                `%;.     ;%;     %;'         `;%%;.%;'\n"
				 "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
				 "                    `:%;.  :;bd%;          %;@%;'\n"
				 "                      `@%:.  :;%.         ;@@%;'   \n"
				 "                        `@%.  `;@%.      ;@@%;         \n"
				 "                          `@%%. `@%%    ;@@%;        \n"
				 "                            ;@%. :@%%  %@@%;       \n"
				 "                              %@bd%%%bd%%:;     \n"
				 "                                #@%%%%%:;;\n"
				 "                                %@@%%%::;\n"
				 "                                %@@@%(o);  . '         \n"
				 "                                %@@@o%;:(.,'         \n"
				 "                            `.. %@@@o%::;         \n"
				 "                               `)@@@o%::;         \n"
				 "                                %@@(o)::;        \n"
				 "                               .%@@@@%::;         \n"
				 "                               ;%@@@@%::;.          \n"
				 "                              ;%@@@@%%:;;;. \n"
				 "                          ...;%@@@@@%%:;;;;,..\n";
	(void) executor;
}
