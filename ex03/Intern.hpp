#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
	public:
		Intern();
		Intern(const Intern& copy);
		Intern &operator=(const Intern& copy);
		AForm *makeForm(std::string name, std::string target);
		~Intern();
};

#endif