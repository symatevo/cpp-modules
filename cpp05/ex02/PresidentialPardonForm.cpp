#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", 25, 5){

}

PresidentialPardonForm::PresidentialPardonForm(std::string sTarget) : Form(sTarget, 25, 5) {
    mTarget = sTarget;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) {
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &other) {
    if (this != &other) {
        this->mTarget = other.getTarget();
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

std::string PresidentialPardonForm::getTarget() {
    return mTarget;
}

void PresidentialPardonForm::beSigned(Bureaucrat &ob) {
    if (this->getGradeExecute() == ob.getGrade() && this->getGradeSign() == ob.getGrade())
    {
        std::cout << mTarget << " has been pardoned by Zaphod Beeblebrox " << std::endl;
    }
}