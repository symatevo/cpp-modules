#ifndef ShrubberyCreationForm_hpp
#define ShrubberyCreationForm_hpp

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    private:
        std::string mTarget;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string sTarget);
        ShrubberyCreationForm(ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator= (ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        virtual void beSigned(Bureaucrat &ob);
        std::string getTarget();
        void execute(Bureaucrat const & executor) const;
} ;

#endif