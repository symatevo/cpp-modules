#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat a("John", 150);
        std::cout << a << std::endl;
        a.increment_grade();
        std::cout << a << std::endl;
        a.decrement_grade();
        std::cout << a << std::endl;
        a.decrement_grade();
        std::cout << a << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

	return (0);
}
