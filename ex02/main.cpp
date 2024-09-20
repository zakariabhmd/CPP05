#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
	try{
		Bureaucrat bure(6, "obj");
		// std::cout << bure.getName() << std::endl;
		// std::cout << bure.getGrade() <<std::endl;
		
		ShrubberyCreationForm shrubberycreation("hasan");
		shrubberycreation.beSigned(bure);
		bure.signForm(shrubberycreation);

		shrubberycreation.execute(bure);
	}
	catch(const std::exception& e){
		std::cerr << "error: "<< e.what() << std::endl;
	}
	return 0;
}