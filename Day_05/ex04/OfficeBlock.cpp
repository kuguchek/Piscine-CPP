#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _i(NULL), _signB(NULL), _execB(NULL) {}

OfficeBlock::~OfficeBlock() {
}

OfficeBlock::OfficeBlock(Intern *i, Bureaucrat *signB, Bureaucrat *execB) : 
	_i(i), _signB(signB), _execB(execB) {} ;

void OfficeBlock::doBureaucracy(std::string name, std::string target) {
	if (!_i)
		throw NoInternException();
	if (!_execB)
		throw NoSignerException();
	if (!_signB)
		throw NoExecException();
	Form *form = _i->makeForm(name, target);
	try {
		_signB->signForm(*form);
	}
	catch (std::exception &e)
	{
		throw SignerTooLowException();
	}
	try {
		_execB->executeForm(*form);
	}
	catch (std::exception &e) {
		throw ExcTooLowException();
	}
}

void OfficeBlock::setNewIntern(Intern & intern) {
	_i = &intern;
}

void OfficeBlock::setNewSign(Bureaucrat & signB) {
	_signB = &signB;
}

void OfficeBlock::setNewExec(Bureaucrat & execB) {
	_execB = &execB;
}

OfficeBlock::NoInternException::NoInternException() {}

OfficeBlock::NoInternException::NoInternException(OfficeBlock::NoInternException const & high)
{
	*this = high;
}

OfficeBlock::NoInternException::~NoInternException() throw() {}

OfficeBlock::NoInternException & OfficeBlock::NoInternException::operator=(OfficeBlock::NoInternException const &)
{
	return *this;
}

const char	*OfficeBlock::NoInternException::what() const throw()
{
	return ("there is no intern!");
}

OfficeBlock::NoSignerException::NoSignerException() {}

OfficeBlock::NoSignerException::NoSignerException(OfficeBlock::NoSignerException const & high)
{
	*this = high;
}

OfficeBlock::NoSignerException::~NoSignerException() throw() {}

OfficeBlock::NoSignerException & OfficeBlock::NoSignerException::operator=(OfficeBlock::NoSignerException const &)
{
	return *this;
}

const char	*OfficeBlock::NoSignerException::what() const throw()
{
	return ("there is no signer Bureaucrat!");
}

OfficeBlock::NoExecException::NoExecException() {}

OfficeBlock::NoExecException::NoExecException(OfficeBlock::NoExecException const & high)
{
	*this = high;
}

OfficeBlock::NoExecException::~NoExecException() throw() {}

OfficeBlock::NoExecException & OfficeBlock::NoExecException::operator=(OfficeBlock::NoExecException const &)
{
	return *this;
}

const char	*OfficeBlock::NoExecException::what() const throw()
{
	return ("there is no execution Bureaucrat!");
}

OfficeBlock::SignerTooLowException::SignerTooLowException() {}

OfficeBlock::SignerTooLowException::SignerTooLowException(OfficeBlock::SignerTooLowException const & high)
{
	*this = high;
}

OfficeBlock::SignerTooLowException::~SignerTooLowException() throw() {}

OfficeBlock::SignerTooLowException & OfficeBlock::SignerTooLowException::operator=(OfficeBlock::SignerTooLowException const &)
{
	return *this;
}

const char	*OfficeBlock::SignerTooLowException::what() const throw()
{
	return ("too low signer grade !");
}

OfficeBlock::ExcTooLowException::ExcTooLowException() {}

OfficeBlock::ExcTooLowException::ExcTooLowException(OfficeBlock::ExcTooLowException const & high)
{
	*this = high;
}

OfficeBlock::ExcTooLowException::~ExcTooLowException() throw() {}

OfficeBlock::ExcTooLowException & OfficeBlock::ExcTooLowException::operator=(OfficeBlock::ExcTooLowException const &)
{
	return *this;
}

const char	*OfficeBlock::ExcTooLowException::what() const throw()
{
	return ("too low executor grade!");
}
