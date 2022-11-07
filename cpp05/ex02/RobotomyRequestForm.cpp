#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", 72, 45){

}

RobotomyRequestForm::RobotomyRequestForm(std::string sTarget) : Form(sTarget, 72, 45) {
    mTarget = sTarget;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) {
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &other) {
    if (this != &other) {
        this->mTarget = other.getTarget();
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

std::string RobotomyRequestForm::getTarget() {
    return mTarget;
}

void RobotomyRequestForm::beSigned(Bureaucrat &ob) {
    if (this->getGradeExecute() == ob.getGrade() && this->getGradeSign() == ob.getGrade())
    {
        std::cout << mTarget << " some drilling noises " << std::endl;
        std::cout << mTarget << mTarget << " has been robotomized successfully 50\\%\\ of the time " << std::endl;
    }
    else
        std::cout << mTarget << mTarget << " the robotomy failed " << std::endl;
}