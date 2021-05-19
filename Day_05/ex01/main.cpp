#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {
	try {
		Form A("First form", 50, 50);
		std::cout << A;
		Form B("Second Form", 0, 50);
		std::cout << B;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat C("B1", 100); //try 1, < 56
		std::cout << C;
		Form F1("Form 1", 56, 70);
		std::cout << F1;
		C.signForm(F1);
		std::cout << F1;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}