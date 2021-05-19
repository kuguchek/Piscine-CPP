#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat & copy)
{
	*this = copy;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){
	this->_grade = rhs._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName(void) const {
	return this->_name;
}

int Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void Bureaucrat::incGrade(){
		_grade -= 1;
		if (_grade < 1)
			throw GradeTooHighException();
}

void Bureaucrat::decGrade(){
		_grade += 1;
		if (_grade > 150)
			throw GradeTooLowException();
}

void Bureaucrat::signForm(Form & form) {
	try {
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception & e){
		std::cout << _name << " did not sign " << form.getName() << " because of " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form) {
	try {
		form.execute(*this);
		std::cout << "bureaucrat " << _name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception & e){
		std::cout << "bureaucrat " << _name << " can not executes " << form.getName() << " because of " << e.what() << std::endl;
	}
}

std::ostream & operator<<(std::ostream & st, Bureaucrat const & rhs)
{
	st << rhs.getName() << ", bureaucrat, grade " << rhs.getGrade() << std::endl;
	return (st);
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const & high)
{
	*this = high;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &)
{
	return *this;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("too high grade");
}


Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const & low)
{
	*this = low;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &)
{
	return *this;
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("too low grade");
}
