#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137), target("")
{
	std::cout << "ShrubberyCreationForm: Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm: Constructor with parametrs called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): Form(other)
{
	std::cout << "ShrubberyCreationForm: Copy constructor called" << std::endl;
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm: Destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	std::cout << "ShrubberyCreationForm: Assignement operator called" << std::endl;
	return *this; 
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!(this->getIsSigned()) || executor.getGrade() > this->getExecGrade())
		throw Form::CantExecuteException();
	std::ofstream file(this->target + "_shrubbery");
	file << "  ~~~  " << std::endl;
	file << " ~~~~~ " << std::endl;
	file << "~~~~~~~" << std::endl;
	file << "  ~|~  " << std::endl;
	file << "   |    " << std::endl;
	file.close();
}