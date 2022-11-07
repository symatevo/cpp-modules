#ifndef PresidentialPardonForm_hpp
#define PresidentialPardonForm_hpp

#include "Form.hpp"

class PresidentialPardonForm : public Form {
    private:
        std::string mTarget;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm &other);
        PresidentialPardonForm &operator= (PresidentialPardonForm &other);
        ~PresidentialPardonForm();
        virtual void beSigned(Bureaucrat &ob);
        std::string getTarget();
        void execute(Bureaucrat const & executor) const;
} ;

#endif