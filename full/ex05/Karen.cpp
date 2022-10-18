#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void Karen::debug(void)
{
    std::cout << "debug message" << std::endl;
}

void Karen::info(void)
{
    std::cout << "info message" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "warning message" << std::endl;
}

void Karen::error(void)
{
    std::cout << "error message" << std::endl;
}

void Karen::complain(std::string level)
{
	void (Karen::*f[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    bool arr[] = { level == "debug",
                   level == "info",
                   level == "warning",
                   level == "error"};

    int i = 0;
    while (arr[i] == 0)
        i++;
    (this->*f[i])();
}
