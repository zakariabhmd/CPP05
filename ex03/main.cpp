#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){
	try{
		Bureaucrat bure("obj", 1);
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

// int main() {
//     Intern someRandomIntern;
//     AForm* form;

//     // Testing valid form creation
//     form = someRandomIntern.makeForm("robotomy request", "Bender");
//     if (form != nullptr) {
//         Bureaucrat bob("Bob", 50);  // Create a bureaucrat to sign and execute
//         bob.signForm(*form);
//         bob.executeForm(*form);
//         delete form;  // Don't forget to delete the dynamically allocated form
//     }

//     // Testing invalid form creation
//     form = someRandomIntern.makeForm("invalid form", "Target");
//     if (form == nullptr) {
//         std::cout << "Form creation failed due to invalid form name." << std::endl;
//     }

//     return 0;
// }
