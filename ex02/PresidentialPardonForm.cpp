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