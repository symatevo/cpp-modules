#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
        std::cout << "Please input all 3 arguments!!" << std::endl;
    else
    {
        Replace replace(argv[1], argv[2], argv[3]);
        replace.replace();
    }
    return (0);
}
