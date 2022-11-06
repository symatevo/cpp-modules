#include "Form.hpp"

Form::Form() : _name(""), _signed(false), _grade_sign(0), _grade_execute(0) {
    std::cout << "Form: Default constructor called" << std::endl;
}

Form::Form(std::string name, bool signed, const int grade_sign, const int _grade_execute)
: _name(name), _signed(signed), _grade_sign(grade_sign), _grade_execute(_grade_execute) {
    std::cout << "Form: Constructor with paramets called" << std::endl;
} 

Form::Form(Form &other){
    std::cout << "Form: Copy constructor called" << std::endl;
    *this = other;
}

Form &Form::operator= (Form &other) {
    std::cout << "Form: Copy assignement constructor called" << std::endl;
    if (this != &other) {
        this->_signed = other._signed;
    }
    return (*this);
}


const char* Form::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}
