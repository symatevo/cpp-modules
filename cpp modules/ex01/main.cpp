#include "phonebook.hpp"

std::string	ft_fill(std::string what)
{
	std::string	line;
	std::cout << what;
	std::getline(std::cin, line);
	return line;
}

void	fill_field(Contact &a)
{

	a.set_index(1);
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
	a.set_nick_name(ft_fill("Nickname of contact: "));
	while (1)
	{
		if (a.set_phone_number(ft_fill("Phone number of contact: ")))
			break;
	}
	a.set_secret(ft_fill("Darkest secret of contact: "));
	std::cout << GREEN << " contact added " << RESET;
	a.add_index();
}

int	check_index(std::string ind) {
	for(std::string::size_type i = 0; i < ind.size(); ++i) {
		if (std::isdigit(ind[i]) == 0)
		{
			std::cout << "Error: invalid index" << std::endl;
			return (0);
		}
	}
	int index = std::stoi(ind);
	if (index > 0 && index < 9)
		return (index);
	std::cout << "Error: invalid index, try in range 0-8" << std::endl;
	return (0);
}

int	enter_index() {
	std::string ind;
	int			index;
	ind = ft_fill("Enter index");
	while (1)
	{
		index = check_index(ind);
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

	if (argc != 1)
	{
		std::cout << "no argument needed";
		return (0);
	}
	a.set_index(0);
	while (1)
	{
		std::cout << "enter" << RED << " \"ADD\" \"SEARCH\" " << RESET << "or" << RED << " \"EXIT\" " << RESET << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{
			fill_field(a);
			phone.add_contact(a);
		}
		else if (command == "SEARCH")
		{
			phone.display(a);
			index = enter_index();
			phone.search_contact(index);
		}
		else if (command == "EXIT")
		{
			return(1);
		}
		else
		{
			std::cout << "wrong argument";
			return (0);
		}
	}
}