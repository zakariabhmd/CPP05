#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm{
	private:
		const std::string name;
		bool isSigned;
		const int grade_sign;
		const int grade_exec;
	public:
		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char* what()const throw();
		};
		AForm();
		~AForm();
		AForm(const std::string name, int grade_sign, int grade_exec);
		std::string getName() const;
		bool getisSigned() const;
		int getGradsigned()const;
		int getGradeexec()const;
		void beSigned(Bureaucrat &bur);
		virtual void execute(const Bureaucrat& executor) const = 0;

	
};

std::ostream &operator<<(std::ostream &Cout, const AForm &form);
#endif