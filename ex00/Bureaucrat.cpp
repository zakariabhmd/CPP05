// #include "Bureaucrat.hpp"

// Bureaucrat::Bureaucrat() : name("Default"){
// 	this->grade = 1;
// }
// Bureaucrat::Bureaucrat(int grade, const std::string name) : name(name) , grade(grade){
// 	if (grade < 1)
// 		throw GradeTooHighException();
// 	else if (grade > 150)
// 		throw GradeTooLowException();
// }
// std::string Bureaucrat::getName() const{
// 	return this->name;
// }
// int Bureaucrat::getGrade()const{
// 	return this->grade;
// }

// const char * Bureaucrat::GradeTooHighException::what() const throw(){
// 	return "grade it to hight";
// }
// const char * Bureaucrat::GradeTooLowException::what() const throw(){
// 	return "grade it to Low";
// }

// void Bureaucrat::increment(){
// 	if (grade > 1)
// 		grade--;
// 	else
// 		throw GradeTooHighException();
// }

// void Bureaucrat::decrement(){
// 	if (grade < 150)
// 		grade++;
// 	else
// 		throw GradeTooLowException();
// }

// std::ostream &operator<<(std::ostream &Cout, const Bureaucrat &Bureaucrat){
// 	Cout << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
// 	return Cout;
// }
#include "Bureaucrat.hpp"

// Constructor
Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
}

// Destructor
Bureaucrat::~Bureaucrat() {}

// Getters
const std::string& Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

// Grade modification
void Bureaucrat::incrementGrade() {
    if (grade <= 1) {
        throw GradeTooHighException();
    }
    grade--;
}

void Bureaucrat::decrementGrade() {
    if (grade >= 150) {
        throw GradeTooLowException();
    }
    grade++;
}

// Exceptions
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

// Overload operator
std::ostream& operator<<(std::ostream& out, const Bureaucrat& b) {
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
}

