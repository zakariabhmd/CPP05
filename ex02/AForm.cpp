#include "AForm.hpp"
// #include "Bureaucrat.hpp"


AForm::AForm() : grade_sign(1) , grade_exec(1){
}

AForm::AForm(const std::string name, int grade_sign, int grade_exec) : name(name), grade_sign(grade_sign), grade_exec(grade_exec){
	this->isSigned = false;
	if (grade_sign < 1 || grade_sign > 150)
		throw GradeTooHighException();
	if (grade_exec < 1 || grade_exec > 150)
		throw GradeTooHighException();
}
bool AForm::getisSigned() const{
	return this->isSigned;
}
std::string AForm::getName()const{
	return this->name;
}
int AForm::getGradsigned()const{
	return this->grade_sign;
}
int AForm::getGradeexec()const{
	return this->grade_exec;
}
const char * AForm::GradeTooHighException::what() const throw(){
	return "grade it to hight";
}
const char * AForm::GradeTooLowException::what() const throw(){
	return "grade it to Low";
}
std::ostream &operator<<(std::ostream &Cout, const AForm &Aform){
	Cout << "AForm :" << Aform.getName() << ", Signed Grade " << Aform.getGradsigned() << ", execGrade " << Aform.getGradeexec() << ", Signed : " << (Aform.getisSigned() ? "yes" : "no");
	return Cout;
}
void AForm::beSigned(Bureaucrat &bur){
	if (bur.getGrade() <= grade_sign)
		this->isSigned = true;
	else
		throw GradeTooLowException();
}
AForm::~AForm(){
}
// #include "AForm.hpp"

// // Protected constructor
// AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute)
//     : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
//     if (gradeToSign < 1 || gradeToExecute < 1) {
//         throw GradeTooHighException();
//     }
//     if (gradeToSign > 150 || gradeToExecute > 150) {
//         throw GradeTooLowException();
//     }
// }

// // Destructor
// AForm::~AForm() {}

// // Getters
// const std::string& AForm::getName() const { return name; }
// bool AForm::getIsSigned() const { return isSigned; }
// int AForm::getGradeToSign() const { return gradeToSign; }
// int AForm::getGradeToExecute() const { return gradeToExecute; }

// // Be signed
// void AForm::beSigned(const Bureaucrat& b) {
//     if (b.getGrade() > gradeToSign) {
//         throw GradeTooLowException();
//     }
//     isSigned = true;
// }

// // Exceptions
// const char* AForm::GradeTooHighException::what() const throw() {
//     return "Form grade is too high!";
// }

// const char* AForm::GradeTooLowException::what() const throw() {
//     return "Form grade is too low!";
// }

// const char* AForm::FormNotSignedException::what() const throw() {
//     return "Form is not signed!";
// }

// // Overload operator
// std::ostream& operator<<(std::ostream& out, const AForm& form) {
//     out << "Form: " << form.getName() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No")
//         << ", Grade to Sign: " << form.getGradeToSign()
//         << ", Grade to Execute: " << form.getGradeToExecute();
//     return out;
// }
