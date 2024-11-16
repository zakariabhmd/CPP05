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

// #ifndef AFORM_HPP
// #define AFORM_HPP

// #include <iostream>
// #include <string>
// #include "Bureaucrat.hpp"

// class Bureaucrat;
// class AForm {
// private:
//     const std::string name;
//     bool isSigned;
//     const int gradeToSign;
//     const int gradeToExecute;

// protected:
//     // Protected constructor for derived classes to set the name and grades
//     AForm(const std::string& name, int gradeToSign, int gradeToExecute);

// public:
//     virtual ~AForm();

//     // Exceptions
//     class GradeTooHighException : public std::exception {
//     public:
//         const char* what() const throw();
//     };

//     class GradeTooLowException : public std::exception {
//     public:
//         const char* what() const throw();
//     };

//     class FormNotSignedException : public std::exception {
//     public:
//         const char* what() const throw();
//     };

//     // Getters
//     const std::string& getName() const;
//     bool getIsSigned() const;
//     int getGradeToSign() const;
//     int getGradeToExecute() const;

//     // Member functions
//     void beSigned(const Bureaucrat& b);
//     virtual void execute(const Bureaucrat& executor) const = 0; // Pure virtual function

//     // Overload operator
//     friend std::ostream& operator<<(std::ostream& out, const AForm& form);
// };

// #endif
