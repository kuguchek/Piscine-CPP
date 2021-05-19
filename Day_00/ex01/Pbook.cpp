#include <iostream>
#include <iomanip>
#include "Pbook.hpp"

Pbook::Pbook(void) {}
Pbook::~Pbook(void){};

std::string Pbook::toFirstName(void) const {
	return this->firstName;
}

std::string Pbook::toLastName (void) const {
	return this->lastName;
}

std::string Pbook::toNickname (void) const {
	return this->nickname;
}

std::string Pbook::toLogin (void) const {
	return this->login;
}

std::string Pbook::toPostalAddr (void) const {
	return this->postalAddr;
}

std::string Pbook::toEmail (void) const {
	return this->email;
}

std::string Pbook::toPhoneNbr (void) const {
	return this->phoneNbr;
}

std::string Pbook::toBirthday (void) const {
	return this->birthday;
}

std::string Pbook::toFavMeal(void) const {
	return this->favMeal;
}

std::string Pbook::toUndrColor(void) const {
	return this->undrColor;
}

std::string Pbook::toDarkSecret(void) const {
	return this->darkSecret;
}

void Pbook::addFirstName (std::string input) {
	this->firstName = input;
}

void Pbook::addLastName (std::string input) {
	this->lastName = input;
}

void Pbook::addNickname (std::string input) {
	this->nickname = input;
}

void Pbook::addLogin (std::string input) {
	this->login = input;
}

void Pbook::addPostalAddr (std::string input) {
	this->postalAddr = input;
}

void Pbook::addEmail (std::string input) {
	this->email = input;
}

void Pbook::addPhoneNbr (std::string input) {
	this->phoneNbr = input;
}

void Pbook::addBirthday(std::string input) {
	this->birthday = input;
}

void Pbook::addFavMeal(std::string input) {
	this->favMeal = input;
}

void Pbook::addUndrColor(std::string input) {
	this->undrColor = input;
}

void Pbook::addDarkSecret(std::string input) {
	this->darkSecret = input;
}
