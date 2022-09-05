/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:19:22 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 15:40:06 by tel-bouh         ###   ########.fr       */
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
		bool				getSign(void) const;
		int					getSignGrade(void) const;
		int					getExecuteGrade(void) const;
		void				beSigned(Bureaucrat& b);

	Form(std::string name, int signGrade, int executeGrade);
	Form(const Form& rhs);
	Form&	operator=(const Form& rhs);
	~Form();

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
