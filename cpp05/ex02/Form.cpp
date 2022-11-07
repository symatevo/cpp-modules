#include "Form.hpp"

Form::Form() : _name(""), _signed(false), _grade_sign(0), _grade_execute(0) {
    std::cout << "Form: Default constructor called" << std::endl;
}

Form::Form(std::string name, const int grade_sign, const int _grade_execute)
: _name(name), _grade_sign(grade_sign), _grade_execute(_grade_execute) {
    std::cout << "Form: Constructor with paramets called" << std::endl;
    _signed = false;
} 

Form::Form(Form &other) : _name(""), _signed(false), _grade_sign(0), _grade_execute(0) {
    std::cout << "Form: Copy constructor called" << std::endl;
    *this = other;
}

Form &Form::operator= (Form &other) {
    std::cout << "Form: Copy assignement operator called" << std::endl;
    if (this != &other) {
        this->_signed = other._signed;
    }
    return (*this);
}

const std::string Form::getName() {
    return _name;
}

bool Form::getSign() {
    return _signed;
}

const int Form::getGradeSign() {
    return _grade_sign;
}

const int Form::getGradeExecute() {
    return _grade_execute;
}

void Form::beSigned(Bureaucrat &ob) {
    if (ob.getGrade() <= _grade_sign && ob.getGrade() <= _grade_execute)
        _signed = true;
    else
        throw Form::GradeTooLowException();
}

void Form::execute(Bureaucrat const & executor) const {
    if (!this->_signed && executor.getGrade() > this->_grade_execute)
        throw GradeTooLowException();
    
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too Low";
}

std::ostream& operator<<(std::ostream& out, Form& ob) {
    out << ob.getName() << " form grade required to sign is " << std::to_string(ob.getGradeSign()) << " grade required to execute it is" << std::to_string(ob.getGradeExecute());
    return (out);
}