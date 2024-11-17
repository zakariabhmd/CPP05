#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b1("zakaria", 1);
        Bureaucrat b2("test", 150);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;

        b1.incrementGrade();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b3("last", 151);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

