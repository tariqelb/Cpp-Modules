/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:41:37 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 19:34:17 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private :
		const std::string	name;
		int					grade;

	public :
		const std::string&	getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& rhs);
	Bureaucrat& operator=(const Bureaucrat& rhs);
	~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
		private :
			const char *	msg;

		public :
			const char *	what() const throw();
		
		GradeTooHighException();
		~GradeTooHighException();
	};

	class GradeTooLowException : public std::exception
	{
		private :
			const char *	msg;

		public :
			const char *	what() const throw();
		
		GradeTooLowException();
		~GradeTooLowException();
	};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& rhs);

#endif
