#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"){
	this->grade = 1;
}
Bureaucrat::Bureaucrat(int grade, const std::string name) : name(name) , grade(grade){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}
std::string Bureaucrat::getName() const{
	return this->name;
}
int Bureaucrat::getGrade()const{
	return this->grade;
}


const char * Bureaucrat::GradeTooHighException::what() const throw(){
	return "grade to Hight";
}
const char * Bureaucrat::GradeTooLowException::what() const throw(){
	return "grade to Low";
}

void Bureaucrat::increment(){
	if (grade > 1)
		grade--;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decrement(){
	if (grade < 150)
		grade++;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &Cout, const Bureaucrat &Bureaucrat){
	Cout << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
	return Cout;
}
void Bureaucrat::signForm(AForm &form){
	if(form.getisSigned() == true)
		std::cout <<this->getName() << " signed " << form.getName() << std::endl;
	else
		std::cout <<this->getName() << " couldn't signed " << form.getName() << " because grade it to low " <<std::endl;
}
void Bureaucrat::executeForm(AForm const & form){
	try{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception &e){
		std::cout << "Error : " << e.what()<< std::endl;
	}
}