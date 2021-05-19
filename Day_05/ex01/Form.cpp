#include "Form.hpp"

Form::Form() : _gradeToSign(0), _gradeToExecute(0) {}

Form::Form(std::string const name, int gs, int ge) : _name(name), _gradeToSign(gs), _gradeToExecute(ge) {
	if (ge < 1 || gs < 1)
		throw GradeTooHighException();
	else if (ge > 150 || gs > 150)
		throw GradeTooLowException();
}


Form::Form(const Form & rhs) : _name(rhs.getName()), _gradeToSign(rhs.getGradeToSign()),
		 _gradeToExecute(rhs.getGradeToExecute()) {}

Form & Form::operator=(Form const & rhs){
	this->_signed = rhs._signed;
	return *this;
}

Form::~Form() {}

std::string const Form::getName(void) const {
	return this->_name;
}

int Form::getGradeToSign(void) const {
	return this->_gradeToSign;
}

int Form::getGradeToExecute(void) const {
	return this->_gradeToExecute;
}

bool Form::getSigned(void) const {
	return this->_signed;
}

void Form::beSigned(const Bureaucrat & b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_signed = true;
}

std::ostream & operator<<(std::ostream & st, Form const & rhs)
{
	st << "form " << rhs.getName();
	if (rhs.getSigned() == true)
		st << " signed";
	else
		st << " does not signed";
	st << ". grade to sign - " << rhs.getGradeToSign() << ", grade to execute - " << rhs.getGradeToExecute() << std::endl;
	return (st);
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const & high)
{
	*this = high;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(Form::GradeTooHighException const &)
{
	return *this;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("too high grade");
}


Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const & low)
{
	*this = low;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(Form::GradeTooLowException const &)
{
	return *this;
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("too low grade");
}
