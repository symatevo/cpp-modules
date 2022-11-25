#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
		Bureaucrat();
	public:
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();

		Bureaucrat	&operator=(Bureaucrat const &other);

		const std::string getName() const;
		int getGrade() const;
        void increment_grade();
        void decrement_grade();
		void signForm(Form &form) const;

        class GradeTooHighException: public std::exception {
            virtual const char* what() const throw();
	    };
	    class GradeTooLowException: public std::exception {
		    virtual const char* what() const throw();
	    };
	void executeForm(Form const & form);
};

std::ostream	&operator<<(std::ostream &ostr, Bureaucrat const &other);

#endif