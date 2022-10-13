#include "phonebook.hpp"

void	Contact::set_index(int index) {
	_index = index;
}

int		Contact::get_index(std::string ind) {
	for(char& c : phone_number) {
    	if (std::isdigit(c) == 0)
		{
			std::cout << "Error: invalid index";
			return (0);
		}
	}
	int index = std::stoi(ind);
	if (index > 0 && index < 9)
		return (index);
	std::cout << "Error: invalid index, try in range 0-8";
	return (0);
}

int		Contact::set_phone_number(std::string phone_number) {
	for(char& c : phone_number) {
    	if (std::isdigit(c) == 0 && phone_number[0] != '+')
		{
			std::cout << "Error: invalid phone number";
			return (0);
		}
	}
	_phone_number = phone_number;
	return (1);
}

int		Contact::set_first_name(std::string first_name) {
	for (char& c : first_name) {
		if (std::isalpha(c) == 0)
		{
			std::cout << "Error: invalid first name" << std::endl;
			std::cout << "Try to input normal first name please :')";
			return (0);
		}
	}
	_first_name = first_name;
	return (1);
}

int		Contact::set_last_name(std::string last_name) {
	for (char& c : first_name) {
		if (std::isalpha(c) == 0)
		{
			std::cout << "Error: invalid last name" << std::endl;
			std::cout << "Try to input normal last name please :')";
			return (0);
		}
	}
	_last_name = last_name;
	return (1);
}

void	Contact::set_nick_name(std::string nick_name) {
	_nick_name = nick_name;
}

void	Contact::set_secret(std::string secret){
	_secret = secret;
}