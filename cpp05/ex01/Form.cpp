#include "Form.hpp"

Form::Form() : sign_grade(0), exec_grade(0) {
	std::cout << "Form: Default constructor called" << std::endl;
}

Form::Form(const std::string name, int grade_sign, int grade_execute): name(name), is_signed(false), sign_grade(grade_sign), exec_grade(grade_execute)
{
	std::cout << "Form: Constructor with parametrs called." << std::endl;
	if (grade_sign < 1 || grade_execute < 1)
		throw Form::GradeTooHighException();
	if (grade_sign > 150 || grade_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &other): name(other.getName()), is_signed(other.getIsSigned()),
		sign_grade(other.getSignGrade()), exec_grade(other.getExecGrade())
{
	std::cout << "Form: Copy constructor called" << std::endl;
	*this = other;
}

Form::~Form()
{
	std::cout << "Form: destructor called." << std::endl;
}

Form &	Form::operator=(Form const &other)
{
	std::cout << "Form: Assignement operator called" << std::endl;
	this->is_signed = other.is_signed;
	return *this;
}

std::string const Form::getName() const
{
	return this->name;
}

int const Form::getSignGrade() const
{
	return this->sign_grade;
}

int const Form::getExecGrade() const
{
	return this->exec_grade;
}

bool Form::getIsSigned() const
{
	return this->is_signed;
}

void Form::beSigned(const Bureaucrat *ob)
{
	if (ob->getGrade() > this->sign_grade)
		throw Form::GradeTooLowException();
	this->is_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too Low";
}

std::ostream	&operator<<(std::ostream &out, Form const &other)
{
	out << other.getName() << " Form grade required to sign is "
		<< other.getSignGrade() << " and grade required to executed is "
		<< other.getExecGrade() << " , it is "
		<< ((other.getIsSigned()) ? "" : "not ") << "signed";
	return out;
}