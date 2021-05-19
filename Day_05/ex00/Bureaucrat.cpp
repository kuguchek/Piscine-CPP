#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs) : _name(rhs.getName()), 
_grade(rhs.getGrade()) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){
	_grade = rhs._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName(void) const {
	return _name;
}

int Bureaucrat::getGrade(void) const {
	return _grade;
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