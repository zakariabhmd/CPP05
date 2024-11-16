#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &shru) : AForm(shru){
	*this = shru;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &shru){
	this->target = shru.target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm(target, 72, 45){
	this->target = target;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor)const{
	if(executor.getGrade() <= getGradsigned() && getisSigned())
	{
		srand(time(NULL));
		if (std::rand() % 2 == 0)
			std:: cout << this->target << " has been robotomized successfull\n";
		else
			std:: cout << "robotomy failed\n";
	}
	else
		throw GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm(){
}
// #include "RobotomyRequestForm.hpp"
// #include <iostream>
// #include <cstdlib>  // For rand() and srand()
// #include <ctime>    // For time()

// // Constructor
// RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
//     : AForm("RobotomyRequestForm", 72, 45), target(target) {
//     // Initialize random seed once, to ensure random behavior on each execution
//     srand(time(0));
// }

// // Destructor
// RobotomyRequestForm::~RobotomyRequestForm() {}

// // Execute function: Simulates drilling and robotomy success/failure
// void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
//     // Check if the form is signed
//     if (!getIsSigned()) {
//         throw FormNotSignedException();
//     }
//     // Check if the bureaucrat has the required grade to execute the form
//     if (executor.getGrade() > getGradeToExecute()) {
//         throw GradeTooLowException();
//     }

//     // Simulate drilling noise
//     std::cout << "Drilling noises..." << std::endl;

//     // 50% chance to succeed or fail the robotomy
//     if (rand() % 2 == 0) {
//         std::cout << target << " has been robotomized successfully!" << std::endl;
//     } else {
//         std::cout << target << " robotomy failed!" << std::endl;
//     }
// }
