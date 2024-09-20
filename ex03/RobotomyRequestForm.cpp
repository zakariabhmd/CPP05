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