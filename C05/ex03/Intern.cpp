//
// Created by Tadeusz Kondracki on 4/12/22.
//

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

const std::string Intern::knownForms[3] = {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm"};

Intern::Intern()
{
	//default values
}

Intern::Intern(Intern const &inst)
{
	*this = inst;
}

Intern::~Intern()
{

}

Intern &Intern::operator=(Intern const &rhs)
{
	(void) rhs;
	return *this;
}

Form *Intern::makeForm(std::string name, std::string target) const
{
	for (int i = 0; i < 3; i++){
		if (knownForms[i] == name){
			std::cout << ("Intern creates " + name) << std::endl;
			switch (i)
			{
				case 0: return new PresidentialPardonForm(name, target);
				case 1: return new ShrubberyCreationForm(name, target);
				case 2: return new RobotomyRequestForm(name, target);
				default: return NULL;
			}
		}
	}
	std::cout << "Unknown Form, intern made Coffe instead:\n"
				 "                              ░░              ░░              ░░                                \n"
				 "                              ░░              ░░              ░░                                \n"
				 "                                ░░              ░░              ░░                              \n"
				 "                                ░░              ░░              ░░                              \n"
				 "                              ░░              ░░              ░░                                \n"
				 "                              ░░              ░░              ░░                                \n"
				 "                            ░░              ░░              ░░                                  \n"
				 "                            ░░              ░░              ░░                                  \n"
				 "                              ░░              ░░              ░░                                \n"
				 "                              ░░              ░░              ░░                                \n"
				 "                                ░░              ░░              ░░                              \n"
				 "                                ░░              ░░              ░░                              \n"
				 "                              ░░              ░░              ░░                                \n"
				 "                              ░░              ░░              ░░                                \n"
				 "                                                                                                \n"
				 "                                    ▓▓██████████████████████                                    \n"
				 "                            ████████                        ████████                            \n"
				 "                        ████        ████████████████████████        ████                        \n"
				 "                      ██░░    ██████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒██▓▓██  ░░░░██                      \n"
				 "                    ██    ████▒▒▓▓▓▓▓▓▓▓░░░░░░▓▓▓▓░░░░░░▓▓▓▓▒▒▓▓▓▓████    ██                    \n"
				 "                  ██    ██▓▓▓▓▓▓▓▓▓▓▓▓░░▓▓▓▓▓▓░░░░▓▓▓▓▓▓░░▓▓▓▓▓▓▓▓▒▒▓▓██    ██                  \n"
				 "                  ██  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓  ██  ██▓▓▓▓▓▓██      \n"
				 "                  ██  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░▓▓▓▓▓▓▓▓▓▓▓▓░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒██  ████          ██    \n"
				 "                  ██    ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░▓▓▓▓▓▓▓▓░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██    ██              ██  \n"
				 "                    ██  ░░████▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓████░░  ██░░    ████      ██  \n"
				 "                    ██        ██████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██████        ██  ████    ██    ██  \n"
				 "                    ██              ████████████████████████              ████        ██    ██  \n"
				 "                    ██                ░░  ░░░░░░░░░░░░░░░░░░              ██          ██    ██  \n"
				 "                ██████                                                    ██████    ██      ██  \n"
				 "            ████    ██                                                    ██    ██  ██    ██    \n"
				 "        ░░██▒▒░░    ▒▒▓▓                                                ▓▓▒▒    ░░██▒▒    ██    \n"
				 "      ▓▓  ░░          ██                                                ██  ██████      ▓▓      \n"
				 "    ██                ██                                                ████        ████  ██    \n"
				 "  ██                  ░░██                                            ██░░░░    ████░░░░  ░░██  \n"
				 "  ██                ██████                                            ██████████░░░░        ██  \n"
				 "██                ██▒▒░░▒▒██                                        ██▒▒▒▒██                  ██\n"
				 "██              ██▒▒██▒▒▒▒██                                        ██▒▒▒▒▒▒██                ██\n"
				 "██              ██░░▓▓████▒▒▓▓                                    ▓▓▒▒██░░▒▒██                ██\n"
				 "  ██            ██▒▒██▓▓░░▒▒▒▒██                                ██▒▒░░▒▒████                ██  \n"
				 "  ██              ██░░██▒▒████▒▒████                        ████▒▒██▒▒██▒▒██                ██  \n"
				 "    ██            ██▒▒▒▒██▓▓░░▒▒░░▒▒██▓▓▓▓            ▓▓▓▓██▒▒██▒▒░░██▒▒░░██              ██    \n"
				 "      ██            ██████▒▒▒▒▒▒██████▒▒▒▒████████████▒▒██▒▒▒▒▓▓██▒▒▒▒████░░            ██      \n"
				 "        ██                ██████░░▒▒██░░▒▒██▒▒▒▒░░▒▒██▒▒▒▒██░░▒▒▒▒████                ██        \n"
				 "          ████                ██▒▒▒▒▓▓▒▒▒▒██░░▒▒████▒▒░░▒▒▒▒██████                ████          \n"
				 "          ░░  ████              ████  ████░░████░░░░████████    ░░            ████              \n"
				 "                  ████                                                    ████                  \n"
				 "                      ██▓▓▓▓██                                    ▓▓▓▓▓▓██                      \n"
				 "                              ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓                              " << std::endl;
	return NULL;
}
