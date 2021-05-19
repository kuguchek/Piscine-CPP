#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & rhs) : Form(rhs) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs) {
	Form::operator=(rhs);
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) {
	_target = target;
	srand(time(0));
}

void RobotomyRequestForm::action (void) const {
	if (rand() % 2 == 0)
		std::cout << "DRRRRRRRR.....failed in robotomizing....." << _target << std::endl;
	else
		std::cout << "DRRRRRRRRRRRR....." << _target << " succesfully robotomized!" << std::endl;
}