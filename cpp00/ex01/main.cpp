#include "Phonebook.hpp"

std::string	ft_fill(std::string what)
{
	std::string	line;
	std::cout << what;
	std::getline(std::cin, line);
	return line;
}

void	fill_field(Contact &a)
{
	a.set_nums(0);
	std::string	line;
	std::cout << RESET << "Enter ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (1)
	{
		if (a.set_first_name(ft_fill("First name of contact: ")))
			break;
	}
	while (1)
	{
		if (a.set_last_name(ft_fill("Last name of contact: ")))
			break;
	}
	while (1) {
		if (a.set_nick_name(ft_fill("Nickname of contact: ")))
			break;
	}
	while (1) {
		if (a.set_phone_number(ft_fill("Phone number of contact: ")))
			break;
	}
	while (1) {
		if (a.set_secret(ft_fill("Darkest secret of contact: ")))
			break;
	}
	std::cout << GREEN << "CONTACT ADDED" << RESET << std::endl;
	a.add_index();
}

int	check_index(std::string ind, Phonebook phone) {
	if (ind == "EXIT") {
		exit(0);
	}
	for(std::string::size_type i = 0; i < ind.size(); ++i) {
		if (std::isdigit(ind[i]) == 0) {
			std::cout << RED << "Error: invalid index" << RESET << std::endl;
			return (0);
		}
	}
	int index = std::stoi(ind);
	if ((index > 0 && index < 9))
		if (!(((phone.get_contact(index - 1)).get_first_name(0)).empty()))
	 		return index;
		else
		{
	 		std::cout << RED << "Error: No contact added for " << RESET << index << std::endl;
			return (index);
		}
	else
	 	std::cout << RED << "Error: invalid range for index" << RESET << std::endl;
	 return (0);
}

int	enter_index(Phonebook phone) {
	std::string ind;
	int			index;

	index = 0;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (1)
	{
		index = check_index(ft_fill("Enter index :"), phone);
		if (index)
			break ;
	}
	return index;
}

int main(int argc, char **argv)
{
	Contact		a;
	Phonebook	phone;
	std::string command;
	int			index;

	if (argc != 1) {
		std::cout << RED << "Wrong command" << RESET << std::endl;
		return (0);
	}
	a.set_index(0);
	while (1) {
		std::cout << "enter" << GREEN << " \"ADD\" \"SEARCH\" " << RESET << "or" << GREEN << " \"EXIT\" " << RESET << std::endl;
		std::cin >> command;
		if (command == "ADD") {
			fill_field(a);
			phone.add_contact(a);
		}
		else if (command == "SEARCH") {
			phone.display(a);
			index = enter_index(phone);
			phone.search_contact(index);
		}
		else if (command == "EXIT")
			return(1);
		else
			std::cout << RED << "Wrong command" << RESET << std::endl;
	}
	return (0);
}