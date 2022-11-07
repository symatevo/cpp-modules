#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 145, 137){

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string sTarget) : Form(sTarget, 145, 137) {
    mTarget = sTarget;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) {
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &other) {
    if (this != &other) {
        this->mTarget = other.getTarget();
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

std::string ShrubberyCreationForm::getTarget() {
    return mTarget;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!this.getSign() && executor.getGrade() > this->_grade_execute)
        throw GradeTooLowException();
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!(this->getGradeSign()) || executor.getGrade() > this->getExecGrade())
		throw Form::CantExecute();
	std::ofstream file(this->mTarget + "_shrubbery");
    file << "    ~~~~~~    "
                   " ~~~~~~~~~~~~  "
                   "~~~~~~~~~~~~~~~"
                   "~~~~~~~~~~~~~~~"
                   " ~~~~~~~~~~~~  "
                   "    ~~|~~      "
                   "      |        "
                   "      |        "
                   "      |        "
                   "      |        " << std::endl;
	file.close();
}