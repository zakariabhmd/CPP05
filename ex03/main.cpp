#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

// int main(){
// 	try{
// 		Bureaucrat bure("obj", 1);
// 		Intern someRandomIntern;
// 		AForm* rrf;
// 		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
// 		rrf->beSigned(bure);
// 		bure.signForm(*rrf);
// 		rrf->execute(bure);
// 	}
// 	catch(const std::exception& e){
// 		std::cerr << "error: "<< e.what() << std::endl;
// 	}
// 	return 0;
// }

// int main() {

//     Intern someRandomIntern;
//     AForm* rrf;
//     rrf = someRandomIntern.makeForm("robotomy request", "Bender");
//     if (rrf != nullptr) {
//         Bureaucrat bob("Bob", 50);
//         bob.signForm(*rrf);
//         bob.executeForm(*rrf);
//     }

//     rrf = someRandomIntern.makeForm("invalid form", "Target");
//     if (rrf == nullptr) {
//         std::cout << "Form creation failed due to invalid form name." << std::endl;
//     }

//     return 0;
// }

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    Intern someRandomIntern;
    Bureaucrat alice("Alice", 1);

    AForm *form1 = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm *form2 = someRandomIntern.makeForm("shrubbery creation", "Home");
    AForm *form3 = someRandomIntern.makeForm("unknown form", "Nowhere");

    if (form1) {
        alice.signForm(*form1);
        alice.executeForm(*form1);
    }

    if (form2) {
        alice.signForm(*form2);
        alice.executeForm(*form2);
    }

    if (form3) {
        alice.signForm(*form3);
        alice.executeForm(*form3);
    }

    return 0;
}
