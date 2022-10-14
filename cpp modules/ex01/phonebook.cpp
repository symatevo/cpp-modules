#include "phonebook.hpp"

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
	if (phone_number[0] != '+' && !std::isdigit(phone_number[0]))
	{
		std::cout << "Error: invalid phone number" << std::endl;
		return (0);
	}
	for(std::string::size_type i = 1; i < phone_number.size(); ++i){
    	if ((!std::isdigit(phone_number[i])))
		{
			std::cout << "Error: invalid phone number" << std::endl;
			return (0);
		}
	}
	_phone_number = phone_number;
	return (1);
}

int		Contact::set_first_name(std::string first_name) {
	//std::cout << "->" << first_name << "<-\n";
	for (std::string::size_type i = 0; i < first_name.size(); ++i){
		if (std::isalpha(first_name[i]) == 0)
		{
			std::cout << "Error: invalid first name" << std::endl;
			std::cout << "Try to input normal first name please :')" << std::endl;
			return (0);
		}
	}
	_first_name = first_name;
	return (1);
}

int		Contact::set_last_name(std::string last_name) {
	for (std::string::size_type i = 0; i < last_name.size(); ++i) {
		if (std::isalpha(last_name[i]) == 0)
		{
			std::cout << "Error: invalid last name" << std::endl;
			std::cout << "Try to input normal last name please :')" << std::endl;
			return (0);
		}
	}
	_last_name = last_name;
	return (1);
}

int		Contact::get_nums() {
	return _nums;
}

void	Contact::set_nick_name(std::string nick_name) {
	_nick_name = nick_name;
}

void	Contact::set_secret(std::string secret){
	_secret = secret;
}

void	Phonebook::display(Contact a){
	int		start;
	start = 0;

	while (start < a.get_index() - 1)
	{
		std::cout << "displaying";
		start++;
	}
}

void	Phonebook::add_contact(Contact a){
	all[a.get_index() - 1] = a;
}

void	Phonebook::search_contact(int i){
	std::cout << "displaying";
}