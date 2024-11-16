// #include "Bureaucrat.hpp"
// #include "Form.hpp"

// int main(){
// 	try{
// 		Bureaucrat bure(1, "zakaria");
// 		std::cout << bure.getName() << std::endl;
// 		std::cout << bure.getGrade() <<std::endl;
// 		Form form("test", 2, 8);
// 		form.beSigned(bure);
// 		bure.signForm(form);
// 	}
// 	catch(const std::exception& e){
// 		std::cerr << "error: "<< e.what() << std::endl;
// 	}
// 	return 0;
// }

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

        b1.signForm(f1);  // Alice should be able to sign
        b2.signForm(f1);  // Bob shouldn't be able to sign

        b2.signForm(f2);  // Bob should be able to sign
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
