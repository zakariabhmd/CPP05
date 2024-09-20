#include "Intern.hpp"

Intern::Intern(){
}
Intern::Intern(const Intern& copy){
	*this = copy;
}
Intern &Intern::operator=(const Intern& copy)
{
	(void)copy;
	return *this;
}
AForm *Intern::makeForm(std::string name, std::string target){
	std::string str[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	int i;
	for(i =0; i < 3; i++){
		if (name == str[i])
			break;
	}
	switch (i)
	{
		case 0:{
		std::cout <<"Intern creates robotomy request" << std::endl;
		return new RobotomyRequestForm(target);
	}
		case 1:{
		std::cout <<"Intern creates shrubbery creation" << std::endl;
		return new ShrubberyCreationForm(target);
	}
		case 2:{
		std::cout <<"Intern creates presidential pardon" << std::endl;
		return new PresidentialPardonForm(target);
	}
	default:{
		std::cerr<< "Error: name not found !\n";
		return NULL;
	}
	}
}
Intern::~Intern(){
}