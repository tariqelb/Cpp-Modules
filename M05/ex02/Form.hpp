/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:00:44 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 16:56:16 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		const std::string 	name;
		bool				sign;
		const int			signGrade;
		const int			executeGrade;

	public :
		const std::string	getName(void) const;
		bool			getSign(void) const;
		int			getSignGrade(void) const;
		int			getExecuteGrade(void) const;
		void			beSigned(Bureaucrat& b);
		virtual void		execute(Bureaucrat const & b) const = 0;
		virtual std::string	getTarget(void) const = 0;

	Form(std::string name, int signGrade, int executeGrade);
	Form(const Form& rhs);
	Form&	operator=(const Form& rhs);
	virtual ~Form();

	class GradeTooHighException : public std::exception
	{
		private :
			const char*	msg;

		public	:
			const char *	what() const throw();

		GradeTooHighException();
		~GradeTooHighException() throw();
	};

	class GradeTooLowException : public std::exception
	{
		private :
			const char*	msg;

		public	:
			const char *	what() const throw();

		GradeTooLowException();
		~GradeTooLowException() throw();
	};
};

std::ostream&	operator<<(std::ostream& out, const Form& rhs);

#endif
