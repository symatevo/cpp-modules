#include <iostream>
#include <fstream>

// int parsing(int argc, char **argv, data &a) {
//     return (0);
// }

bool is_empty(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

void check_file(std::ifstream &f) {
    if (!f) {
        std::cout << "File is not open" << std::endl;
        f.close();
        exit(0);
    }
    if (is_empty(f)) {
        std::cout << "File is empty" << std::endl;
        f.close();
        exit(0);
    }
}

void	change_line(std::string &line, std::string s1, std::string s2) {
    int index;
    index = 0;
	while ((index = line.find(s1, index)) != std::string::npos) {
		line.erase(index, s1.length());
		line.insert(index, s2);
	}
}

void    write_line(std::ofstream &outfile, std::string line) {
        outfile << line << std::endl;
}

void read_and_change_file(std::ifstream &f, std::string s1, std::string s2) {
    if (s1.empty())
    {
        std::cout << "Error: second argument is empty" << std::endl;
        exit(0);
    }
	std::ofstream outfile;
    outfile.open("replace.txt");
    std::string	line;
    while (getline(f, line)) {
        change_line(line, s1, s2);
	    write_line(outfile, line);
	}
    outfile.close();
}

int main(int argc, char **argv) 
{
    if (argc == 4) {
        std::ifstream file(argv[1]);
        check_file(file);
        read_and_change_file(file, argv[2], argv[3]);
        file.close();
    }
    else
        std::cout << "Error: Wrong arguments" << std::endl;
}