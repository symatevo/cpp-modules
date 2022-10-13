#include "phonebook.hpp"

int		enter_index() {
	int	index;
	index = 0;

	while (!(index > 0 && index < all.get_total_index()))
		index = a.get_index(ft_fill("please enter index of contact"));
	return index;
}
std::string	ft_fill(std::string what)
{
	std::string	line;
	std::cout << what;
	std::cin >> line;
	return line;
}

void	fill_field(Contact &a)
{
	std::string	line;
	std::cout << RESET << "Please enter ";
	while (a.get_nums() != 5)
	{
		a.set_nums(0);
		if (a.set_first_name(ft_fill("first name of contact: ")))
			if (a.set_last_name(ft_fill("last name of contact: ")))
				a.set_nick_name(ft_fill("nickname of contact: "));
				if (a.set_phone_number(ft_fill("phone number of contact: ")))
					a.set_secret(ft_fill("darkest secret of contact: "));
						std::cout << "enter" << GREEN << " contact added " << RESET;
	}
}

int main(void)
{
	int			i;
	int			index;
	Contact		a;
	Phonebook	phone;
	std::string command;

	a.set_index(0);
	i = 0;
	std::cout << "enter" << RED << " \"ADD\" \"SEARCH\" " << RESET << "or" << RED << " \"EXIT\" " << std::endl;
	std::cin >> command;
	if (command == "ADD")
	{
		fill_field(a);
		all.add_contact(a);
	}
	else if (command == "SEARCH")
	{
		all.display();
		index = enter_index();
		all.search();
	}
	else if (command == "EXIT")
	{
		exit();
	}
}