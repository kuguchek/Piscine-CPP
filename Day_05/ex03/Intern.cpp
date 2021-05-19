#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const &) {
	return *this;
}

Intern::Intern(const Intern & rhs) {
	*this = rhs;
}

Form *Intern::makeForm(const std::string name, const std::string target) {
	if (name == "shrubbery creation") {
		std::cout << "Intern creates " << name << " form "<< std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (name == "robotomy request") {
		std::cout << "Intern creates " << name << " form "<< std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (name == "presidential pardon"){
		std::cout << "Intern creates " << name << " form "<< std::endl;
		return (new PresidentialPardonForm(target));
	}
	else {
		std::cout << "There is no such form - " << name << std::endl;
		return NULL;
	}
}