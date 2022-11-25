#include "DataType.hpp"

DataType::DataType() {
    //std::cout << "Default constructor called" << std::endl;
    mInput = "";
}

DataType::DataType(std::string input) { 
    //std::cout << "Constructor with parametrs called" << std::endl;
    if (input.empty())
        throw InvaludArgumentException();
    mInput = input;
    misChar = false;
    misInt = false;
    misDouble = false;
    misFloat = false;
}

DataType::DataType(DataType &other) {
    //std::cout << "Copy Constructor called" << std::endl;
    *this = other;
}

DataType &DataType::operator= (DataType &other) {
    //std::cout << "Operator assignement called" << std::endl;
    if (this != &other) {
        this->mInput = other.get_input();
    }
    return (*this);
}

DataType::~DataType() {
    //std::cout << "Destructor called" << std::endl;
}

std::string DataType::get_input() {
    return mInput;
}

void DataType::setChar() {
    mChar = mInput[1];
    misChar = true;
}

void DataType::setInt() {
    mInt = std::stoi(mInput);
    misInt = true;
}

void DataType::setFloat() {
    mFloat = std::stof(mInput);
    misFloat = true;
}

void DataType::setDouble() {
    mDouble = std::stod(mInput);
    misDouble = true;
}

bool DataType::isChar() {
    return misChar;
}

bool DataType::isInt() {
    return misInt;
}

bool DataType::isDouble() {
    return misDouble;
}

bool DataType::isFloat() {
    return misFloat;
}

char DataType::getChar() {
    return mChar;
}

int DataType::getInt() {
    return mInt;
}

double DataType::getDouble() {
    return mDouble;
}

float DataType::getFloat() {
    return mFloat;
}

void DataType::InttoChar() {
    std::cout << "Char: ";
    try {
        mChar = static_cast<char> (mInt);
        if (!std::isprint(mChar))
            throw NonDisplayableException();
        std::cout << "\'" << mChar << "\'" << std::endl;
    }
    catch (NonDisplayableException &e) {
        std::cerr << e.what() << std::endl; 
    }
    catch (std::exception &e) {
        std::cout << "Impossible" << std::endl;
    }
}

void DataType::FloattoChar() {
    std::cout << "Char: ";
    try {
        mChar = static_cast<char> (mFloat);
        if (!std::isprint(mChar))
            throw NonDisplayableException();
        std::cout << "\'" << mChar << "\'" << std::endl;
    }
    catch (NonDisplayableException &e) {
        std::cerr << e.what() << std::endl; 
    }
    catch (std::exception &e) {
        std::cout << "Impossible" << std::endl;
    }
}

void DataType::DoubletoChar() {
    std::cout << "Char: ";
    try {
        mChar = static_cast<char> (mFloat);
        if (!std::isprint(mChar))
            throw NonDisplayableException();
        std::cout << "\'" << mChar << "\'" << std::endl;
    }
    catch (NonDisplayableException &e) {
        std::cerr << e.what() << std::endl; 
    }
    catch (std::exception &e) {
        std::cout << "Impossible" << std::endl;
    }
}

void DataType::ChartoInt() {
    std::cout << "Int: ";
    try {
        mInt = static_cast<int> (mChar);
        std::cout << mInt << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Impossible" << std::endl;
    }
}

void DataType::FloattoInt() {
    std::cout << "Int: ";
    try {
        mInt = static_cast<int> (mFloat);
        std::cout << mInt << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Impossible" << std::endl;
    }
}

void DataType::DoubletoInt() {
    std::cout << "Int: ";
    try {
        mInt = static_cast<int> (mDouble);
        std::cout << mInt << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Impossible" << std::endl;
    }
}

void DataType::ChartoDouble() {
    std::cout << "Double: ";
    try
    {
        mDouble = static_cast<double> (mChar);
        std::cout << mDouble << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Impossible" << std::endl;
    }
}

void DataType::InttoDouble() {
    std::cout << "Double: ";
    try
    {
        mDouble = static_cast<double> (mInt);
        std::cout << mDouble << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Impossible" << std::endl;
    }
}

void DataType::FloattoDouble() {
    std::cout << "Double: ";
    try
    {
        mDouble = static_cast<double> (mFloat);
        std::cout << mDouble;
        if (mDouble / mInt == 1)
            std::cout << ".0";
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Impossible" << std::endl;
    }
}

void DataType::ChartoFloat() {
    std::cout << "Float: ";
    try
    {
        mFloat = static_cast<float> (mChar);
        std::cout << mFloat  << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Impossible" << std::endl;
    }  
}

void DataType::InttoFloat() {
    std::cout << "Float: ";
    try
    {
        mFloat = static_cast<float> (mInt);
        
        std::cout << mFloat << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Impossible" << std::endl;
    }  
}

void DataType::DoubletoFloat() {
    std::cout << "Float: ";
    try
    {
        mFloat = static_cast<float> (mDouble);
        std::cout << mFloat;
        if (mFloat / mInt == 1)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Impossible" << std::endl;
    }  
}

void DataType::displayInt() {
    std::cout << "Int: ";
    std::cout << mInt << std::endl;
}

void DataType::displayChar() {
    std::cout << "Char: ";
    std::cout << "'" << mChar << "'" << std::endl;
}

void DataType::displayFloat() {
    std::cout << "Float: ";
    std::cout << mFloat;
    if (mFloat / mInt == 1)
        std::cout << ".0";
    std::cout << "f" << std::endl;
}

void DataType::displayDouble() {
    std::cout << "Double: ";
    std::cout << mDouble;
    if (mDouble / mInt == 1)
        std::cout << ".0";
    std::cout << std::endl;
}

