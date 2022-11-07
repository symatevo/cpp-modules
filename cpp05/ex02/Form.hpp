#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
class Bureaucrat;
class Form {
    private:
        const std::string _name;
        bool	_signed;
		const int _grade_sign;
		const int _grade_execute;
	public:
		Form();
		Form(std::string name, const int _grade_sign, const int _grade_execute);
		Form(Form &other);
		Form & operator= (Form &other);
		class GradeTooHighException: public std::exception {
            virtual const char* what() const throw();
	    };
	    class GradeTooLowException: public std::exception {
		    virtual const char* what() const throw();
	    };
		const std::string getName();
		bool getSign();
		const int getGradeSign();
		const int getGradeExecute();
		virtual void beSigned(Bureaucrat &a) = 0;
		virtual void execute(Bureaucrat const & executor) const = 0;
} ;

std::ostream& operator<<(std::ostream& out, Form& ob);
#include "Bureaucrat.hpp"
#endif