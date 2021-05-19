#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

class OfficeBlock {

	public:
		OfficeBlock();
		~OfficeBlock();
		OfficeBlock(Intern *i, Bureaucrat *signB, Bureaucrat *execB);

		void setNewIntern(Intern & intern);
		void setNewExec(Bureaucrat & execB);
		void setNewSign(Bureaucrat & signB);
		void doBureaucracy(std::string name, std::string target);

		class NoInternException : public std::exception {
		public:
			NoInternException(void);
			NoInternException(NoInternException const & low);
			~NoInternException(void) throw();
			NoInternException & operator=(NoInternException const &);
			virtual const char	*what() const throw();
		};
		class NoSignerException : public std::exception {
		public:
			NoSignerException(void);
			NoSignerException(NoSignerException const & low);
			~NoSignerException(void) throw();
			NoSignerException & operator=(NoSignerException const &);
			virtual const char	*what() const throw();
		};
		class NoExecException : public std::exception {
		public:
			NoExecException(void);
			NoExecException(NoExecException const & low);
			~NoExecException(void) throw();
			NoExecException & operator=(NoExecException const &);
			virtual const char	*what() const throw();
		};
		class SignerTooLowException : public std::exception {
		public:
			SignerTooLowException(void);
			SignerTooLowException(SignerTooLowException const & low);
			~SignerTooLowException(void) throw();
			SignerTooLowException & operator=(SignerTooLowException const &);
			virtual const char	*what() const throw();
		};
		class ExcTooLowException : public std::exception {
		public:
			ExcTooLowException(void);
			ExcTooLowException(ExcTooLowException const & low);
			~ExcTooLowException(void) throw();
			ExcTooLowException & operator=(ExcTooLowException const &);
			virtual const char	*what() const throw();
		};
	private:
		Intern *_i;
		Bureaucrat *_signB;
		Bureaucrat *_execB;
};

std::ostream & operator<<(std::ostream &st, Form const & rhs);

#endif