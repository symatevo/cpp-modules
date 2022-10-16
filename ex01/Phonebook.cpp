#include "Phonebook.hpp"

void	Contact::set_index(int index) {
	_index = index;
}

void	Contact::set_nums(int nums) {
	_nums = nums;
}

void	Contact::add_index(){
	_index++;
	if (_index == 9)
		_index = 1;
}

int		Contact::get_index(){
	return _index;
}

int		Contact::set_phone_number(std::string phone_number) {
	if (phone_number.empty())
	{
		std::cout << RED << "Error: Line is empty" << RESET << std::endl;
		return (0);
	}
	if (phone_number == "EXIT")
		exit(0);
	if (phone_number[0] != '+' && !std::isdigit(phone_number[0]))
	{
		std::cout << RED << "Error: invalid phone number" << RESET << std::endl;
		return (0);
	}
	for(std::string::size_type i = 1; i < phone_number.size(); ++i){
    	if ((!std::isdigit(phone_number[i])))
		{
			std::cout << RED << "Error: invalid phone number" << RESET << std::endl;
			return (0);
		}
	}
	_phone_number = phone_number;
	return (1);
}

int		Contact::set_first_name(std::string first_name) {
	if (first_name.empty())
	{
		std::cout << RED << "Error: Line is empty" << RESET << std::endl ;
		return (0);
	}
	if (first_name == "EXIT")
		exit(0);
	for (std::string::size_type i = 0; i < first_name.size(); ++i){
		if (std::isalpha(first_name[i]) == 0)
		{
			std::cout << RED << "Error: invalid first name" << std::endl;
			std::cout << "Try to input normal first name please :')" << RESET << std::endl;
			return (0);
		}
	}
	_first_name = first_name;
	return (1);
}

int		Contact::set_last_name(std::string last_name) {
	if (last_name.empty())
	{
		std::cout << RED << "Error: Line is empty" << RESET << std::endl;
		return (0);
	}
	if (last_name == "EXIT")
		exit(0);
	for (std::string::size_type i = 0; i < last_name.size(); ++i) {
		if (std::isalpha(last_name[i]) == 0)
		{
			std::cout << RED << "Error: invalid last name" << std::endl;
			std::cout << "Try to input normal last name please :')" << RESET << std::endl;
			return (0);
		}
	}
	_last_name = last_name;
	return (1);
}

int		Contact::get_nums() {
	return _nums;
}

int	Contact::set_nick_name(std::string nick_name) {
	if (nick_name.empty())
	{
		std::cout << RED << "Error: Line is empty" << RESET << std::endl;
		return (0);
	}
	if (nick_name == "EXIT")
		exit(0);
	_nick_name = nick_name;
	return (1);
}

std::string	Contact::get_first_name(int indicator) {
	if (indicator == 1)
	{
		if (_first_name.size() > 10)
		{
			_first_name[9] = '.';
			_first_name.erase(10, _first_name.size() - 10);
		}
	}
	return _first_name;
}

std::string	Contact::get_nick_name(int indicator) {
	if (indicator == 1)
	{
		if (_nick_name.size() > 10)
		{
			_nick_name[9] = '.';
			_nick_name.erase(10, _nick_name.size() - 10);
		}
	}
	return _nick_name;
}

std::string	Contact::get_last_name(int indicator) {
	if (indicator == 1)
	{
		if (_last_name.size() > 10)
		{
			_last_name[9] = '.';
			_last_name.erase(10, _last_name.size() - 10);
		}
	}
	return _last_name;
}

std::string Contact::get_phone_number(){
	return _phone_number;
}

std::string Contact::get_darkest_secret(){
	return _secret;
}

int	Contact::set_secret(std::string secret){
	if (secret == "EXIT")
		exit(0);
	if (secret.empty())
	{
		std::cout << RED << "Error: Line is empty" << RESET << std::endl;
		return (0);
	}
	_secret = secret;
	return (1);
}

void	Phonebook::display(Contact a){
	int		start;
	start = 1;

	std::cout << "---------------------------------------------" << std::endl;
	while (start <= 8)
	{
		std::cout << "|" << std::right << std::setw(10) <<  start;
		std::cout << "|" << std::right << std::setw(10) << all[start - 1].get_first_name(1);
		std::cout << "|" << std::right << std::setw(10) << all[start - 1].get_last_name(1);
		std::cout << "|" << std::right << std::setw(10) << all[start - 1].get_nick_name(1) << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		start++;
	}
}

void	Phonebook::add_contact(Contact a){
	all[a.get_index() - 1] = a;
}

Contact	Phonebook::get_contact(int i) {
	return all[i];
}

void	Phonebook::search_contact(int i){
	std::cout << all[i - 1].get_first_name(0) << std::endl;
	std::cout << all[i - 1].get_last_name(0) << std::endl;
	std::cout << all[i - 1].get_nick_name(0) << std::endl;
	std::cout << all[i - 1].get_phone_number() << std::endl;
	std::cout << all[i - 1].get_darkest_secret() << std::endl;
}