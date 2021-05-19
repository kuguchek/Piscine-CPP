#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;
class Intern {

public:
	Intern();
	~Intern();
	Intern(const Intern & rhs);
	Intern & operator=(Intern const & );
	Form* makeForm(const std::string name, const std::string target);
};

#endif