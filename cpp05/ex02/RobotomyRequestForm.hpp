#ifndef RobotomyRequestForm_hpp
#define RobotomyRequestForm_hpp

#include "Form.hpp"

class RobotomyRequestForm : public Form {
    private:
        std::string mTarget;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm &other);
        RobotomyRequestForm &operator= (RobotomyRequestForm &other);
        ~RobotomyRequestForm();
        virtual void beSigned(Bureaucrat &ob);
        std::string getTarget();
        void execute(Bureaucrat const & executor) const;
} ;

#endif