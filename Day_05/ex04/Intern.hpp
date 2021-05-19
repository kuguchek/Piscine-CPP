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
	class NoFormException : public std::exception {
		public:
			NoFormException(void);
			NoFormException(NoFormException const & low);
			~NoFormException(void) throw();
			NoFormException & operator=(NoFormException const &);
			virtual const char	*what() const throw();
	};
	Form* makeForm(const std::string name, const std::string target);
};

#endif