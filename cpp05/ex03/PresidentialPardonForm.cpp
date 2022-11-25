#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), target("")
{
	std::cout << "PresidentialPardonForm: Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm: Constructor with parametrs called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): Form(other)
{
	std::cout << "PresidentialPardonForm: Copy constructor called" << std::endl;
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm: Destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	std::cout << "PresidentialPardonForm: Assignement operator called" << std::endl;
	return *this; 
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!(this->getIsSigned()) || executor.getGrade() > this->getExecGrade())
		throw Form::CantExecuteException();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}