#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
int main()
{
	Intern      idiotOne;
	Bureaucrat  hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat  bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;
	ob.setNewIntern(idiotOne);
	ob.setNewSign(bob);
	ob.setNewExec(hermes);
	std::cout << hermes;
	std::cout << bob;
	try
	{
		ob.doBureaucracy("mutant pig termination", "Pigley");
	}
	catch (OfficeBlock::NoInternException &e)
	{
		std::cout << "OfficeBlock not functional because "
		<< e.what() << std::endl;
	}
	catch (OfficeBlock::NoSignerException &e)
	{
		std::cout << "OfficeBlock not functional because "
		<< e.what() << std::endl;
	}
	catch (OfficeBlock::NoExecException &e)
	{
		std::cout << "OfficeBlock not functional because "
		<< e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Bureaucracy can't be done because "
		<< e.what() << std::endl;
	}
	try
	{
		ob.doBureaucracy("shrubbery creation", "rrrrrr");
	}
	catch (std::exception & e)
	{
		std::cout << "Bureaucracy can't be done because "
		<< e.what() << std::endl;
	}
}