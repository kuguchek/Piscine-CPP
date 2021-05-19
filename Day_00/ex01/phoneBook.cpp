#include <iostream>
#include <iomanip>
#include "Pbook.hpp"

void printDetailed(Pbook Contacts[8], int input)
{
	if (input < 1 || input > 8 || Contacts[input - 1].toFirstName().empty()) {
		std::cout << "WRONG INDEX" << std::endl;
		return ;
	}
	std::cout << Contacts[input - 1].toFirstName() << std::endl;
	std::cout << Contacts[input - 1].toLastName() << std::endl;
	std::cout << Contacts[input - 1].toNickname() << std::endl;
	std::cout << Contacts[input - 1].toLogin() << std::endl;
	std::cout << Contacts[input - 1].toPostalAddr() << std::endl;
	std::cout << Contacts[input - 1].toEmail() << std::endl;
	std::cout << Contacts[input - 1].toPhoneNbr() << std::endl;
	std::cout << Contacts[input - 1].toBirthday() << std::endl;
	std::cout << Contacts[input - 1].toFavMeal() << std::endl;
	std::cout << Contacts[input - 1].toUndrColor() << std::endl;
	std::cout << Contacts[input - 1].toDarkSecret() << std::endl;
}

std::string searchOutput(std::string str)
{
	std::string empty = "";
	int i = 0;

	if (str.length() <= 10)
		return str ;
	while(++i < 10)
		empty += str[i];
	empty += ".";
	return empty;
}

void phoneBookSearch(Pbook Contacts[8])
{
	int i = -1;
	std::string input;

	if (Contacts[0].toFirstName().empty()){
		std::cout << "EMPTY PHONEBOOK" << std::endl;
		return ;
	}
	while(++i < 8 && !(Contacts[i].toFirstName().empty()))
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << searchOutput(Contacts[i].toFirstName()) << "|";
		std::cout << std::setw(10) << searchOutput(Contacts[i].toLastName()) << "|";
		std::cout << std::setw(10) << searchOutput(Contacts[i].toNickname()) << "|" << std::endl;
	}
	std::cout << "WHAT INDEX DO YOU NEED? ";
	std::cin >> input;
	if (input.length() != 1){
		std::cout << "WRONG INDEX" << std::endl;
		return ;
	}
	i = input[0] - '0';
	printDetailed(Contacts, i);

}

void phoneBookAdd(Pbook Contacts[8])
{
	std::string input;
	int i = -1;

	if (!(Contacts[7].toFirstName().empty()))
		std::cout << "CANT'T ADD ONE MORE! PHONEBOOK IS FULL!" << std::endl;
	while(++i < 8)
	{
		if (Contacts[i].toFirstName().empty())
		{
			std::cout << "FIRST NAME: ";
			std::cin >> input;
			Contacts[i].addFirstName(input);
			std::cout << "LAST NAME: ";
			std::cin >> input;
			Contacts[i].addLastName(input);
			std::cout << "NICKNAME: ";
			std::cin >> input;
			Contacts[i].addNickname(input);
			std::cout << "LOGIN: ";
			std::cin >> input;
			Contacts[i].addLogin(input);
			std::cout << "POSTAL ADRESS: ";
			std::cin >> input;
			Contacts[i].addPostalAddr(input);
			std::cout << "EMAIL: ";
			std::cin >> input;
			Contacts[i].addEmail(input);
			std::cout << "PHONE NUMBER: ";
			std::cin >> input;
			Contacts[i].addPhoneNbr(input);
			std::cout << "BIRTHDAY: ";
			std::cin >> input;
			Contacts[i].addBirthday(input);
			std::cout << "FAVOURITE MEAL: ";
			std::cin >> input;
			Contacts[i].addFavMeal(input);
			std::cout << "UNDERWEAR COLOR: ";
			std::cin >> input;
			Contacts[i].addUndrColor(input);
			std::cout << "DARKEST SECRET: ";
			std::cin >> input;
			Contacts[i].addDarkSecret(input);
			break ;
		}
	}
}

int main(void)
{
	std::string input;
	Pbook Contacts[8];

	std::cout << "WELLCOME TO PHONEBOOK! ";
	while (1) {
		std::cout << "*ADD* *SEARCH* *EXIT* COMMANDS ARE AVAILABLE" << std::endl;
		std::cin >> input;
		if (input == "ADD")
			phoneBookAdd(Contacts);
		else if (input == "SEARCH")
			phoneBookSearch(Contacts);
		else if (input == "EXIT")
			break ;
		else
			std::cout << "WRONG COMMAND SORRY" << std::endl;
	}
	return 0;
}