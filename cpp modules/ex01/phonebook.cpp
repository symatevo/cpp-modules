#include "phonebook.hpp"

int	Contact::check_saved()
{
	int num;

	num = 0;
    	if (phone_number && !secret.empty() && !first_name.empty() && !last_name.empty() && !nick_name.empty())
		    num++;
	return num;
}

void	Contact::get_number(void)
{
	if (!isdigit(num))
		std::cout << "error";
	phone_number = num;
}


void	fill_field(Contact &a)
{
	std::cout << RESET << "Please enter ";
	std::cout << "the first name of contact: ";
	std::cin >> a.first_name;
	std::cout << "last name of contact:";
	std::cin >> a.last_name;
	std::cout << "nickname of contact: ";
	std::cin >> a.nick_name;
	std::cout << "number of contact: ";
	std::cin >> a.phone_number;
	a.get_number(a.phone_number);
	std::cout << "darkest secret of contact: ";
	std::cin >> a.secret;
}

int main(void)
{
	int			i;
	Contact		a;
	Phonebook	phone;
	std::string command;

	a.index = 0;
	i = 0;
	std::cout << "enter" << RED << " \"ADD\" \"SEARCH\" " << RESET << "or" << RED << " \"EXIT\" " << std::endl;
	std::cin >> command;
	if (command == "ADD")
	{
		fill_field(a);
		if (a.check_saved())
			std::cout << "ok";
		//phone.add(a);l
		//std::cout << one.phone_number << std::endl;
		// std::cin >> first_name;
	}
	//if (command == "SEARCH")
}
// int main()
// {
// 	Contact	one;
// 	std::string	line;
// 	while (1)
// 	{
// 		std::cout << "ENTER "ADD" "SEARCH" or "EXIT"" << std::endl;
// 		if ((std::cin >> line) == "ADD")
// 			//fill_field();
// 		else if ((std::cin >> line) == "SEARCH")
// 			//display_contact();
// 		else if ((std::cin >> line) == "EXIT")
// 			//return 0;
// 	}
// 	return (0);
// }