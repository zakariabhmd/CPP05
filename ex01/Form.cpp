#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, int grade_sign, int grade_exec) : name(name), grade_sign(grade_sign), grade_exec(grade_exec){
	this->isSigned = false;
	if (grade_sign < 1 || grade_sign > 150)
		throw GradeTooHighException();
	if (grade_exec < 1 || grade_exec > 150)
		throw GradeTooHighException();
}
bool Form::getisSigned() const{
	return this->isSigned;
}
std::string Form::getName()const{
	return this->name;
}
int Form::getGradsigned()const{
	return this->grade_sign;
}
int Form::getGradeexec()const{
	return this->grade_exec;
}
const char * Form::GradeTooHighException::what() const throw(){
	return "grade it to hight";
}
const char * Form::GradeTooLowException::what() const throw(){
	return "grade it to Low";
}
std::ostream &operator<<(std::ostream &Cout, const Form &form){
	Cout << "Form :" << form.getName() << ", Signed Grade " << form.getGradsigned() << ", execGrade " << form.getGradeexec() << ", Signed : " << (form.getisSigned() ? "yes" : "no");
	return Cout;
}
void Form::beSigned(Bureaucrat &bur){
	if (bur.getGrade() <= grade_sign)
		this->isSigned = true;
	else
		throw GradeTooLowException();
}