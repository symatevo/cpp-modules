#include "Karen.hpp"

Karen::Karen() {
    stat[0].name = "debug";
	stat[0].ptr = &Karen::debug;
	stat[1].name = "info";
	stat[1].ptr = &Karen::info;
	stat[2].name = "warning";
	stat[2].ptr = &Karen::warning;
	stat[3].name = "error";
	stat[3].ptr = &Karen::error;
}

void    Karen::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Karen::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Karen::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month." << std::endl;
}

void    Karen::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level) {
    int     i;
    i = 0;
    while (i < 4) {
        if (stat[i].name == level)
            (this->*(stat[i].ptr))();
        i++;
    }
}