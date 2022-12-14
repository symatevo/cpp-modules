#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#define RESET   "\033[0m"
#define BLACK   "\033[30m" 
#define RED     "\033[31m"
#define GREEN   "\033[32m"

class Contact   {
	private:
		int			_index;
		int			_nums;
		std::string	_phone_number;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_secret;
    public:
        void		set_index(int	index);
		void		set_nums(int	nums);
		int			set_phone_number(std::string phone_number);
		int			set_first_name(std::string first_name);
		int			set_last_name(std::string last_name);
		int			set_nick_name(std::string nick_name);
		int			set_secret(std::string secret);
		void		add_index();
		int			get_index();
		int			get_nums();
		std::string	get_first_name(int i);
		std::string	get_nick_name(int i);
		std::string	get_last_name(int i);
		std::string get_darkest_secret();
		std::string get_phone_number();
};

class	Phonebook   {
    private:
		Contact all[9];
	public:
		void	add_contact(Contact a);
		void	display(Contact a);
		void	search_contact(int i);
		Contact	get_contact(int i);
};

#endif