#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    std::cout << "Bureaucrat: Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    std::cout << "Bureaucrat: Constructor with parametrs called" << std::endl;
    _grade = grade;
    if (_grade > 150)
        throw GradeTooLowException();
    else if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) {
    std::cout << "Bureurcrat: Copy constructor called" << std::endl;
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other) {
    std::cout << "Bureucrat: Copy assignement operator called" << std::endl;
    if (this != &other) {
        this->_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat: Destructor called" << std::endl;
}

const   std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const{
    return _grade;
}

void Bureaucrat::increment_grade() {
    _grade = _grade - 1;
    if (_grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decrement_grade() {
    _grade = _grade + 1;
    if (_grade > 150)
        throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& ob)
{
    out << ob.getName() << ", bureaucrat grade " << ob.getGrade();
    return (out);
}