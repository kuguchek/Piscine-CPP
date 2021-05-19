#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony{
	private:
		bool _isUnicorn;
		std::string _color;
		std::string _name;
	public:
		Pony(void);
		~Pony(void);

		void hadName(std::string n);
		std::string getName(void) const;
		void hadColor(std::string col);
		std::string getColor(void) const;
		void isUnicorn(bool is);
		bool getUnicorn(void) const;
};

#endif