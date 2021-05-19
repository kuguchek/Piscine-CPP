#ifndef PBOOK_HPP
# define PBOOK_HPP

class Pbook {

	private:
		
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string login;
		std::string postalAddr;
		std::string email;
		std::string phoneNbr;
		std::string birthday;
		std::string favMeal;
		std::string undrColor;
		std::string darkSecret;

	public: 

		Pbook(void);
		~Pbook(void);
		std::string toFirstName(void) const;
		std::string toLastName (void) const;
		std::string toNickname (void) const;
		std::string toLogin (void) const;
		std::string toPostalAddr (void) const;
		std::string toEmail (void) const;
		std::string toPhoneNbr (void) const;
		std::string toBirthday (void) const;
		std::string toFavMeal(void) const;
		std::string toUndrColor(void) const;
		std::string toDarkSecret(void) const;
		void addFirstName (std::string);
		void addLastName (std::string);
		void addNickname (std::string);
		void addLogin (std::string);
		void addPostalAddr (std::string);
		void addEmail (std::string);
		void addPhoneNbr (std::string);
		void addBirthday(std::string);
		void addFavMeal(std::string );
		void addUndrColor(std::string);
		void addDarkSecret(std::string);
};

#endif