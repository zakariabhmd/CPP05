#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat b1("Alice", 1);
        Bureaucrat b2("Bob", 150);

        Form f1("Form A", 1, 50);
        Form f2("Form B", 150, 150);

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

        b1.signForm(f1);
        b2.signForm(f1);

        b2.signForm(f2);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
