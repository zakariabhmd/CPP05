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
