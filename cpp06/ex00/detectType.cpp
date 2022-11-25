#include "DataType.hpp"

void    detect_char(std::string input, DataType &data) {
    if (input[0] == '\'' && input[2] == '\'' && input.size() == 3)
    {
        data.setChar();
    }
}

void    detect_float(std::string input, DataType &data) {
    if (!data.isChar()) {
    bool isFloatingPoint = false, stringValid = false, f = false;
    unsigned long i = 0;
    if (input[0] == '-')
        i++;
    for (; i < (input.size() - 1); i++) {
        if (isdigit(input[i])) {
            stringValid = true;
        }
        else if (input[i] == '.' && isdigit(input[i - 1]) && (isFloatingPoint == false))
        {
            isFloatingPoint = true;
        }
        else
        {
            stringValid = false;
            break;
        }
    }
    if (input[input.size() - 1] == 'f' && input[input.size() - 2] != '.')
        f = true;
    if (f && stringValid)
        data.setFloat();
    if (input == "-inff" || input == "+inff" || input == "nanf") {
        std::cout << "Char: impossible" << std::endl;
        std::cout << "Int: impossible" << std::endl;
        std::cout << "Float: " << input << std::endl;
        std::cout << "Double: " << input.erase(input.size() - 1) << std::endl;
        }
    }
}

void    detect_double(std::string input, DataType &data) {
    if (!data.isChar() && !data.isFloat()) {
        unsigned long i = 0;
        if (input[0] == '-')
            i++;
        bool isFloatingPoint = false, stringValid = false;
        for (; i < input.size(); i++) {
            if (isdigit(input[i]))
                stringValid = true;
            else if (input[i] == '.' && isFloatingPoint == false)
                isFloatingPoint = true;
            else
            {
                stringValid = false;
                break;
            }
        }
        if (stringValid && isFloatingPoint) {
            data.setDouble();
        }
        if (input == "-inf" || input == "+inf" || input == "nan") {
            std::cout << "Char: impossible" << std::endl;
            std::cout << "Int: impossible" << std::endl;
            std::cout << "Float: " << input << "f" << std::endl;
            std::cout << "Double: " << input << std::endl;
        }
    }
}

void    detect_int(std::string input, DataType &data) {
    if (!data.isChar() && !data.isFloat() && !data.isDouble()) {
        bool stringValid = false;
        unsigned long i = 0;
        if (input[0] == '-')
            i++;
        for (; i < input.size(); i++) {
            if (isdigit(input[i]))
                stringValid = true;
            else
            {
                stringValid = false;
                break;
            }
        }
        if (stringValid)
            data.setInt();
    }
}