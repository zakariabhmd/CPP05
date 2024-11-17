#include "Form.hpp"

// Constructor
Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
    : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw GradeTooHighException();
    } else if (gradeToSign > 150 || gradeToExecute > 150) {
        throw GradeTooLowException();
    }
}

// Destructor
Form::~Form() {}

// Getters
const std::string& Form::getName() const {
    return name;
}

bool Form::getIsSigned() const {
    return isSigned;
}

int Form::getGradeToSign() const {
    return gradeToSign;
}

int Form::getGradeToExecute() const {
    return gradeToExecute;
}

// Member Functions
void Form::beSigned(const Bureaucrat& b) {
    if (b.getGrade() > gradeToSign) {
        throw GradeTooLowException();
    }
    isSigned = true;
}

// Exceptions
const char* Form::GradeTooHighException::what() const throw() {
    return "Form grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form grade is too low!";
}

// Overload operator
std::ostream& operator<<(std::ostream& out, const Form& f) {
    out << "Form: " << f.getName() << ", Signed: " << (f.getIsSigned() ? "Yes" : "No")
        << ", Grade to Sign: " << f.getGradeToSign()
        << ", Grade to Execute: " << f.getGradeToExecute();
    return out;
}
