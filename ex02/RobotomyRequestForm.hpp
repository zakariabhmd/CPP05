#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
	private :
		std::string target;
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &shru);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &shru);
		void execute(const Bureaucrat& executor) const;
		~RobotomyRequestForm();
};

#endif