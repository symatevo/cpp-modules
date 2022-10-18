#include "Replace.hpp"

Replace::Replace(std::string file, std::string s1, std::string s2)
{
    _file = file;
    _s1 = s1;
    _s2 = s2;
}

std::string Replace::replace_the_line(std::string str)
{
	int index;

	index = str.find(_s1);
	while (index != -1)
	{
		str.erase(index, _s1.length());
		str.insert(index, _s2);
		index = str.find(_s1);
	}
	return (str);
}

void Replace::replace(void)
{
	std::string out_file;
	std::string str;
	std::ifstream file_in;
	std::ofstream file_out; 

	if (_file.length() == 0 || _s1.length() == 0 || _s2.length() == 0)
	{
		std::cout << "Your argument(s) is(are) invalid!!" << std::endl;
		exit(0);
	}
	file_in.open(_file);
	if (!file_in.is_open())
	{
		std::cout << "File is't open!!" << std::endl;
		exit(0);
	}
	file_in.seekg(0, std::ios::end);
	if (file_in.tellg() <= 0)
	{
		std::cout << "File is empty!!" << std::endl;
		exit(0);
	}
	file_in.seekg(0, std::ios::beg);

	out_file = _file + ".replace";
	file_out.open(out_file);
	if (!file_out.is_open())
	{
		std::cout << "File is't created!!" << std::endl;
		file_in.close();
		exit(0);
	}
	while(getline(file_in, str))
	{
		str = replace_the_line(str);
		file_out << str << std::endl;
	}
	file_in.close();
	file_out.close();
}
