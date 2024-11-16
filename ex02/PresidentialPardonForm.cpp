#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &shru) : AForm(shru){
	*this = shru;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &shru){
	this->target = shru.target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm(target, 25, 5){
	this->target = target;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor)const{
	if(executor.getGrade() <= getGradsigned() && getisSigned())
	{
		std::cout << this->target << "  has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else
		throw GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm(){
}
// #include "PresidentialPardonForm.hpp"
// #include <iostream>

// // Constructor
// PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
//     : AForm("PresidentialPardonForm", 25, 5), target(target) {}

// // Destructor
// PresidentialPardonForm::~PresidentialPardonForm() {}

// // Execute function: Informs that the target has been pardoned
// void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
//     // Check if the form is signed
//     if (!getIsSigned()) {
//         throw FormNotSignedException();
//     }
//     // Check if the bureaucrat has the required grade to execute the form
//     if (executor.getGrade() > getGradeToExecute()) {
//         throw GradeTooLowException();
//     }

//     // Inform that the target has been pardoned
//     std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
// }
