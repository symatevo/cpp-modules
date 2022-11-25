#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	
	try
	{
		Bureaucrat a("John", 5);
		Form first_form("first", 30, 70);
		std::cout << first_form << std::endl;
		a.signForm(first_form);
		std::cout << first_form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("Michael", 150);
		Form second_form("second", 1, 10);
		std::cout << second_form << std::endl;
		b.signForm(second_form);
		std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}