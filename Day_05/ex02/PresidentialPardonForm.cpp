#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & rhs) : Form(rhs) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs) {
	Form::operator=(rhs);
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5) {
	_target = target;
}

void PresidentialPardonForm::action (void) const {
	std:: cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}