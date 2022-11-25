#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45), target("")
{
	std::cout << "RobotomyRequestForm: Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm: Constructor with parametrs called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other): Form(other)
{
	std::cout << "RobotomyRequestForm: Copy constructor called" << std::endl;
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm: Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	std::cout << "RobotomyRequestForm: Assignement operator called" << std::endl;
	return *this; 
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!(this->getIsSigned()) || executor.getGrade() > this->getExecGrade())
		throw Form::CantExecuteException();
	std::cout << " Unbearable drilling noises " << std::endl;
	if (std::rand() % 2)
		std::cout << "The victim " << this->target << " has been successfully robotomized" << std::endl;
	else
		std::cout << "The robotomization on " << this->target << " was a complete and utter failure." << std::endl;
}