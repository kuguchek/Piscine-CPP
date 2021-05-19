#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main () {
	Intern  someRandomIntern;
	Form*   rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf;
	delete rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Form");
	std::cout << *rrf;
	delete rrf;
	rrf = someRandomIntern.makeForm("presidential pardon", "Rrrr");
	std::cout << *rrf;
	delete rrf;
	rrf = someRandomIntern.makeForm("No such form", "R");
	delete rrf;
}