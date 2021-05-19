#include "Pony.hpp"
#include <iostream>

Pony::Pony(void)
{
	std::cout << "making new pony..." << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "sorry, pony " << _name << " is gone!" << std::endl;
}

void Pony::hadName(std::string n)
{
	_name = n;
}

std::string Pony::getName(void) const
{
	return _name;
}

void Pony::hadColor(std::string col)
{
	_color = col;
}

std::string Pony::getColor(void) const
{
	return _color;
}

void Pony::isUnicorn(bool is)
{
	_isUnicorn = is;
}

bool Pony::getUnicorn(void) const
{
	return _isUnicorn;
}