#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat a("John", 150);
        Form first("FirstForm", 200, 200);
        Form second("SecondForm", 100, 100);
        first.beSigned(a);
        std::cout << a << std::endl;
        a.increment_grade();
        std::cout << a << std::endl;
        a.signForm(first);
        a.signForm(second);
        second.beSigned(a);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

	return (0);
}
