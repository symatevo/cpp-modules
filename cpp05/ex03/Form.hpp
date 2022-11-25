#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool is_signed;
		const int sign_grade;
		const int exec_grade;
		Form();
	public:
		Form(const std::string name, int grade_sign, int grade_execute);
		Form(Form const &other);
		virtual ~Form();

		Form &operator=(Form const &other);

		std::string const getName() const;
		bool getIsSigned() const;
		int const getSignGrade() const;
		int const getExecGrade() const;
		void beSigned(const Bureaucrat *ob);

		class GradeTooHighException: public std::exception {
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception {
				virtual const char* what() const throw();
		};
		class CantExecuteException: public std::exception {
				virtual const char* what() const throw();
		};
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, Form const &other);

#endif