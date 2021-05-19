#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm: public Form {

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm & rhs);
		~PresidentialPardonForm();

		PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);
	private:
		std::string _target;
		void action(void) const;
};

#endif
