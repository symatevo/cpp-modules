#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#define RESET   "\033[0m"
#define BLACK   "\033[30m" 
#define RED     "\033[31m"
#define GREEN   "\033[32m"

class Contact   {
	public:
		int			index;
		int			phone_number;
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	secret;
    public:
        int         check_saved();
		void		get_number(void);
};

class	Phonebook   {
    public:
		Contact all[9];
	public:
		void	add_contact(Contact a);
		void	search_contact(Contact a);
};

#endif