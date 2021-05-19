#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const & ) {
	return *this;
}

Intern::Intern(const Intern & rhs) {
	*this = rhs;
}

Form *Intern::makeForm(const std::string name, const std::string target) {
	Form *form = NULL; 
	if (name == "shrubbery creation") {
		std::cout << "Intern creates " << name << " form "<< std::endl;
		form = new ShrubberyCreationForm(target);
	}
	else if (name == "robotomy request") {
		std::cout << "Intern creates " << name << " form "<< std::endl;
		form = new RobotomyRequestForm(target);
	}
	else if (name == "presidential pardon"){
		std::cout << "Intern creates " << name << " form "<< std::endl;
		form = new PresidentialPardonForm(target);
	}
	else {
		throw NoFormException();
	}
	return (form);
}

Intern::NoFormException::NoFormException() {}

Intern::NoFormException::NoFormException(Intern::NoFormException const & low)
{
	*this = low;
}

Intern::NoFormException::~NoFormException() throw() {}

Intern::NoFormException & Intern::NoFormException::operator=(Intern::NoFormException const &)
{
	return *this;
}

const char	*Intern::NoFormException::what() const throw()
{
	return ("there is no such form!");
}