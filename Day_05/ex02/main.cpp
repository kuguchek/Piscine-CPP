#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main () {
	ShrubberyCreationForm Sh("something");
	std::cout << Sh;
	Bureaucrat B("B1", 140);
	std::cout << B;
	B.executeForm(Sh);
	B.signForm(Sh);
	B.executeForm(Sh);
	Bureaucrat E("Executor", 4);
	E.executeForm(Sh);
	RobotomyRequestForm r("RRRRRR");
	std::cout << r;
	Bureaucrat B2("Bureaucrat 2", 70);
	std::cout << B2;
	B2.signForm(r);
	B2.executeForm(r);
	std::cout << E;
	E.executeForm(r);
	PresidentialPardonForm p("Lera");
	E.signForm(p);
	std::cout << p;
	E.executeForm(p);
	return 0;
}