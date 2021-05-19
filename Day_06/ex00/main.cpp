#include <iostream>
#include <climits>
#include <sstream>
#include <cfloat>
#include <string>
#include <cctype>
#include <iomanip>

bool isInt(std::string & str) {
	std::size_t i = 0;
	while(i < str.size()) {
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (!isdigit(str[i]))
			return false;
		i++;
	}
	return (true);
}

void printInt(std::string & str) {
	int i;
	std::stringstream(str) >> i;
	if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else {
		char c = static_cast<char>(i);
		if (isprint(c))
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: Not displayable!" << std::endl;
	}
	std::cout << "int: " << i << std::endl;
	float f = static_cast<float>(i);
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: " << f << "f" << std::endl;
	double d = static_cast<double>(i);
	std::cout << "double: " << d << std::endl;
}

void printChar(char c) {
	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: Not displayable!" << std::endl;
	int i = static_cast<int>(c);
	std::cout << "int: " << i << std::endl;
	float f = static_cast<float>(c);
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: " << f << "f" << std::endl;
	double d = static_cast<double>(c);
	std::cout << "double: " << d << std::endl;
}

void printDoubleValue(std::string str) {
	if (str == "-inf" || str == "+inf" || str == "nan") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
	}
}

void printDouble(std::string str, unsigned long dot) {
	double d;
	std::string s2 = str.substr(dot + 1, str.size() - dot);
	int pres = s2.length();
	std::stringstream(str) >> d;
	if (d < CHAR_MIN || d > CHAR_MAX)
		std::cout << "char: impossible " << std::endl;
	else {
		char c = static_cast<char>(d);
		if (isprint(c))
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: Not displayable!" << std::endl;
	}
	if (d < INT_MIN || d > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else{
		int i = static_cast<int>(d);
		std::cout << "int: " << i << std::endl;
	}
	std::cout << std::setprecision(pres) << std::fixed;
	if (d < -FLT_MAX || d > FLT_MAX)
		std::cout << "float: impossible" << std::endl;
	else{
		float f = static_cast<float>(d);
		std::cout << "float: " << f << "f" << std::endl;
	}
	std::cout << "double: " << d << std::endl;
}

void printFloatVal(std::string str) {
	if (str == "-inff" || str == "+inff" || str == "nanf") {
	std::cout << "char: impossible " << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << std::endl;
	str = str.substr(0, str.size() - 1);
	std::cout << "double: " << str << std::endl;
	}
}

void printFloat(std::string str, unsigned long dot) {
	float f;
	std::string s2 = str.substr(dot + 1, str.size() - dot);
	int pres = s2.length();
	std::stringstream(str) >> f;
	if (f < CHAR_MIN || f > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else {
		char c = static_cast<char>(f);
		if (isprint(c))
			std::cout << "char:" << c << std::endl;
		else
			std::cout << "char: Not displayable!" << std::endl;
	}
	if (f < INT_MIN || f > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else{
		int i = static_cast<int>(f);
		std::cout << "int: " << i << std::endl;
	}
	std::cout << std::setprecision(pres) << std::fixed;
	std::cout << "float: " << f << "f" << std::endl;
	double d = static_cast<double>(f);
	std::cout << "double: " << d << std::endl;
}

bool isAppropriate(std::string & str, unsigned long dot)
{
	unsigned long i = 0;
	std::string s1 = str.substr(0, dot);
	std::string s2 = str.substr(dot + 1, str.size() - dot);
	while(i < s1.size()) {
		if (s1[i] == '-' || s1[i] == '+')
			i++;
		if (!isdigit(s1[i])) {
			return false;
		}
		i++;
	}
	for (i = 0; i < s2.size(); i++) {
		if (!isdigit(s2[i])) {
			return false;
		}
	}
	if (i == 0)
			return false;
	return true;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "usage: ./convert int/double/float/char [value] " << std::endl;
		return 0;
	}
	std::string str = static_cast<std::string>(argv[1]);
	unsigned long dot = str.find('.');
	if (str == "-inff" || str == "+inff" || str == "nanf") {
		printFloatVal(str);
		return 0;
	}
	else if (str == "-inf" || str == "+inf" || str == "nan") {
		printDoubleValue(str);
		return 0;
	}
	else if (str.size() > 1 && dot && (str[str.size() - 1] == 'f') && dot != std::string::npos) {
		str = str.substr(0, str.size() - 1);
		if (isAppropriate(str, dot))
			printFloat(str, dot);
		else {
			std::cout << "wrong format!\n";
			return 0;
		}
	}
	else if (str.size() > 1 && dot != std::string::npos) {		
		if (isAppropriate(str, dot))
			printDouble(str, dot);
		else {
			std::cout << "wrong format!\n";
			return 0;
		}
	}
	else if (str.size() == 1 && !isdigit(str[0])) {
		char c = str[0];
		printChar(c);
	}
	else if (isInt(str))
		printInt(str);
	else {
		std::cout << "wrong format!\n";
		std::cout << "usage: ./convert <int/double/float/char> [value] " << std::endl;
	}
	return (0);
}