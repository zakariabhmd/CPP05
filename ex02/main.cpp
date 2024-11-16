#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 1);

        ShrubberyCreationForm shrubbery("home");
        RobotomyRequestForm robotomy("Alice");
        PresidentialPardonForm pardon("Zaphod");

        bob.signForm(shrubbery);
        bob.executeForm(shrubbery);

        bob.signForm(robotomy);
        bob.executeForm(robotomy);

        bob.signForm(pardon);
        bob.executeForm(pardon);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
