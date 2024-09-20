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