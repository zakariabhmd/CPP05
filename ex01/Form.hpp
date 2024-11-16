// #ifndef FORM_HPP
// #define FORM_HPP

// #include <iostream>
// #include "Bureaucrat.hpp"

// class Bureaucrat;
// class Form{
// 	private:
// 		const std::string name;
// 		bool isSigned;
// 		const int grade_sign;
// 		const int grade_exec;
// 	public:
// 		class GradeTooHighException : public std::exception{
// 			public:
// 				const char* what() const throw();
// 		};
// 		class GradeTooLowException : public std::exception{
// 			public:
// 				const char* what()const throw();
// 		};
// 		Form(const std::string name, int grade_sign, int grade_exec);
// 		std::string getName() const;
// 		bool getisSigned() const;
// 		int getGradsigned()const;
// 		int getGradeexec()const;
// 		void beSigned(Bureaucrat &bur);


// };

// std::ostream &operator<<(std::ostream &Cout, const Form &form);

// #endif

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"  // Include for interaction with Bureaucrat

class Bureaucrat;
class Form {
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;

public:
    // Exceptions
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };

    // Constructor & Destructor
    Form(const std::string& name, int gradeToSign, int gradeToExecute);
    ~Form();

    // Getters
    const std::string& getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    // Member Functions
    void beSigned(const Bureaucrat& b);

    // Overload operator
    friend std::ostream& operator<<(std::ostream& out, const Form& f);
};

#endif
