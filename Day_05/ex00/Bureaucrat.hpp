#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {

public:
	Bureaucrat(); 
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);
	Bureaucrat & operator=(Bureaucrat const & rhs);
	Bureaucrat(const Bureaucrat & copy);
	std::string getName(void) const;
	int getGrade(void) const ;
	void incGrade(void);
	void decGrade(void);
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
	private:
		const std::string _name;
		int _grade;
};

std::ostream & operator<<(std::ostream &st, Bureaucrat const & rhs);

#endif