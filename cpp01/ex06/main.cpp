#include "Karen.hpp"

int main(int argc, char **argv) 
{
    Karen   karo;
    if (argc == 2)
    {
        karo.complain(argv[1]);
    }
}