#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
Form("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & rhs) : Form(rhs) {}
 
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs) {
	Form::operator=(rhs);
	return (*this);
}

void ShrubberyCreationForm::action(void) const {

	std::ofstream file(_target + "shrubbery");
	file << "           *           ,\n";
	file << "                     _/^\\_\n";
    file <<	"                    <     >\n";
    file << "   *                 /.-.\\         *\n";
	file << "            *        `/&\\`                   *\n";	
	file <<	"                    ,@.*;@,\n";
	file << "                   /_o.I %_\\    *\n";
	file <<	"      *           (`'--:o(_@;\n";
 	file << "                 /`;--.,__ `')             *\n";
    file <<	"                ;@`o % O,*`'`&\\\n";
 	file << "          *    (`'--)_@ ;o %'()\\      *\n";
   	file << "               /`;--._`''--._O'@;\\\n";
	file << "              /&*,()~o`;-.,_ `""`)\\\n";
	file << "  *          /`,@ ;+& () o*`;-*-+';\\\n";
	file << "            (`""--.,_0 +% @' ** & %()\\\n";
	file << "            /-.,_    ``''--....-'` ^)  *\n";
	file << "       *    /@%;o`:;'--,.__   __.'\\\n";
	file << "      __.----.(\\-''___#####---...___...-----._\n";
	file.close();
}
