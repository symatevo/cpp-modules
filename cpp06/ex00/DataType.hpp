#ifndef DATATYPE_HPP
#define DATATYPE_HPP

#include <typeinfo>
#include <iostream>
#include <sstream>
#include <iomanip>

class DataType {
    private:
        char mChar;
        int  mInt;
        float mFloat;
        double mDouble;
        bool    misChar;
        bool    misInt;
        bool    misFloat;
        bool    misDouble;
        std::string mInput;
    public:
        DataType();
        DataType(std::string input);
        DataType(DataType &other);
        DataType & operator= (DataType &other);
        ~DataType();
        std::string get_input();
    public:
        void setChar();
        void setInt();
        void setFloat();
        void setDouble();
        bool isChar();
        bool isInt();
        bool isDouble();
        bool isFloat();
        char getChar();
        int  getInt();
        float getFloat();
        double getDouble();
        void InttoChar();
        void FloattoChar();
        void DoubletoChar();
        void  ChartoInt();
        void FloattoInt();
        void DoubletoInt();
        void ChartoDouble();
        void InttoDouble();
        void FloattoDouble(); 
        void ChartoFloat();
        void InttoFloat();
        void DoubletoFloat();
        void displayChar();
        void displayInt();
        void displayFloat();
        void displayDouble();
} ;

void    detect_float(std::string input, DataType &a);
void    detect_int(std::string input, DataType &a);
void    detect_double(std::string input, DataType &a);
void    detect_char(std::string input, DataType &a);
class InvaludArgumentException: public std::exception {
				virtual const char* what() const throw() {
                    return "Invalid argument";
                }
		};

class InvaludNumberArgumentException: public std::exception {
    virtual const char* what() const throw() {
        return "Invalid number of arguments";
    }
} ;

class NonDisplayableException: public std::exception {
    public:
    virtual const char* what() const throw() {
        return "Non displayable";
    }
} ;

#endif