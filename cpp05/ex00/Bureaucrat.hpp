#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat {
    private:
        const std::string   _name;
        int                 _grade;
        Bureaucrat();
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &other);
        Bureaucrat &operator= (Bureaucrat const &other);
        ~Bureaucrat();
        class GradeTooHighException: public std::exception {
            virtual const char* what() const throw();
	    };
	    class GradeTooLowException: public std::exception {
		    virtual const char* what() const throw();
	    };
        const   std::string getName() const;
        int getGrade() const;
        void increment_grade();
        void decrement_grade();
} ;

std::ostream& operator<<(std::ostream& out, Bureaucrat& ob);

#endif