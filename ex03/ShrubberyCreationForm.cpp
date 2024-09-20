#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shru) : AForm(shru){
	*this = shru;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shru){
	this->target = shru.target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm(target, 145, 137){
	this->target = target;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
	if (executor.getGrade() <= getGradsigned() && getisSigned() == true)
	{
		std::string filename = this->target + "_shrubbery";
		std::ofstream outfile(filename.c_str());
		if (outfile.is_open()){
			outfile << "       ###\n"
					<< "      #o###\n"
					<< "    #####o###\n"
					<< "   #o#\\#|#/###\n"
					<< "    ###\\|/#o#\n"
					<< "     # }|{  #\n"
					<< "       }|{\n";
			outfile.close();
		}
		else
			std::cerr << "Error: can't open file" << std::endl;

	}
	else 
		throw GradeTooLowException();

}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}