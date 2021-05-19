#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {

public:
	Form(); 
	Form(std::string name, int gs, int ge);
	virtual ~Form(void);
	Form & operator=(Form const & rhs);
	Form(const Form & copy);
	std::string const getName(void) const;
	int getGradeToSign(void) const;
	int getGradeToExecute(void) const;
	bool getSigned(void) const;
	void beSigned(const Bureaucrat & b);
	void execute (Bureaucrat const & executor) const;
	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(void);
			GradeTooHighException(GradeTooHighException const & high);
			~GradeTooHighException(void) throw();
			GradeTooHighException & operator=(GradeTooHighException const &);
			virtual const char	*what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException(void);
			GradeTooLowException(GradeTooLowException const & low);
			~GradeTooLowException(void) throw();
			GradeTooLowException & operator=(GradeTooLowException const &);
			virtual const char	*what() const throw();
	};
	class NotSignedException : public std::exception {
		public:
			NotSignedException(void);
			NotSignedException(NotSignedException const & low);
			~NotSignedException(void) throw();
			NotSignedException & operator=(NotSignedException const &);
			virtual const char	*what() const throw();
	};
	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
		virtual void action(void) const = 0;
};

std::ostream & operator<<(std::ostream &st, Form const & rhs);

#endif