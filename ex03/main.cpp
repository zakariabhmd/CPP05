#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){
	try{
		Bureaucrat bure(1, "obj");
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		rrf->beSigned(bure);
		bure.signForm(*rrf);
		rrf->execute(bure);
	}
	catch(const std::exception& e){
		std::cerr << "error: "<< e.what() << std::endl;
	}
	return 0;
}