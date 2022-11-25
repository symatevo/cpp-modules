#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat: Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name), grade(grade) {
	std::cout << "Bureaucrat: Constructor with parametrs called." << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) {
	std::cout << "Bureaucrat: Copy constructor called" << std::endl;
	*this = other;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat: destructor called." << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other) {
	std::cout << "Assignement operator for Bureaucrat called" << std::endl;
	this->grade = other.grade;
	return *this;
}

std::string const Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::increment_grade() {
    grade = grade - 1;
    if (grade < 0)
        throw GradeTooHighException();
}

void Bureaucrat::decrement_grade() {
    grade = grade + 1;
    if (grade > 150)
        throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &ostr, Bureaucrat const &other)
{
	ostr << other.getName() << ", Bureaucrat grade " << other.getGrade();
	return ostr;
}

void Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(this);
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << this->name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}