#include "DataType.hpp"

void    check_argc(int argc) {
    if (argc != 2)
        throw InvaludNumberArgumentException();
}

void DetectType(std::string input, DataType &a) {
    detect_char(input, a);
    detect_float(input, a);
    detect_double(input, a);
    detect_int(input, a);
    if (!a.isChar() && !a.isFloat() && !a.isDouble() && !a.isInt()) {
        throw InvaludArgumentException();
    }
}

int main(int argc, char **argv) {
    try {
        check_argc(argc);
        DataType a(argv[1]);
        DetectType(argv[1], a);
        if (a.isChar()) {
            a.displayChar();
            a.ChartoInt();
            a.ChartoFloat();
            a.ChartoDouble();
        }
        else if (a.isInt()) {
            a.InttoChar();
            a.displayInt();
            a.InttoFloat();
            a.InttoDouble();
        }
        else if (a.isFloat()) {
            a.FloattoChar();
            a.FloattoInt();
            a.displayFloat();
            a.FloattoDouble();
        }
        else if (a.isDouble()) {
            a.DoubletoChar();
            a.DoubletoInt();
            a.DoubletoFloat();
            a.displayDouble();
        }
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;            
    }
}