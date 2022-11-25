#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int	idx;

	i = 0;
	while(++i < argc)
	{
		idx = -1;
		std::string str = argv[i];
		while(++idx < (int)str.length())
			std::cout << (char)toupper(str[idx]);
	}
}