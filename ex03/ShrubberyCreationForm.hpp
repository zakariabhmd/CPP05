#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &shru);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shru);
		void execute(const Bureaucrat& executor) const;
		~ShrubberyCreationForm();
	
};

#endif