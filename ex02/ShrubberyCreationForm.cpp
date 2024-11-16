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
// #include "ShrubberyCreationForm.hpp"
// #include <fstream>

// ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
//     : AForm("ShrubberyCreationForm", 145, 137), target(target) {}

// ShrubberyCreationForm::~ShrubberyCreationForm() {}

// void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
//     if (!getIsSigned()) {
//         throw FormNotSignedException();
//     }
//     if (executor.getGrade() > getGradeToExecute()) {
//         throw GradeTooLowException();
//     }

//     std::ofstream file(target + "_shrubbery");
//     if (file) {
//         file << "ASCII TREE" << std::endl;
//         file.close();
//     } else {
//         std::cerr << "Could not create shrubbery file!" << std::endl;
//     }
// }
