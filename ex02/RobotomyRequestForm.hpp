#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "AForm.hpp"

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
// #ifndef ROBOTOMYREQUESTFORM_HPP
// #define ROBOTOMYREQUESTFORM_HPP

// #include "AForm.hpp"
// #include <cstdlib>  // For rand()

// class RobotomyRequestForm : public AForm {
// private:
//     std::string target;

// public:
//     // Constructor
//     RobotomyRequestForm(const std::string& target);

//     // Destructor
//     ~RobotomyRequestForm();

//     // Override the execute function
//     void execute(const Bureaucrat& executor) const override;
// };

// #endif
