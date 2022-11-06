#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat {
    private:
        const std::string   _name;
        int                 _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat &other);
        Bureaucrat &operator= (Bureaucrat &other);
        ~Bureaucrat();
        class GradeTooHighException: public std::exception {
            virtual const char* what() const throw();
	    };
	    class GradeTooLowException: public std::exception {
		    virtual const char* what() const throw();
	    };
        std::string getName();
        int getGrade();
        void increment_grade();
        void decrement_grade();
        void signForm(Form &ob);
} ;

std::ostream& operator<<(std::ostream& out, Bureaucrat& ob);

#endif