/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:44:08 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 16:44:10 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define  ROBOTOMYREQUESTFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private :
		std::string	target;

	public :
		void			execute(Bureaucrat const & b) const;
		std::string		getTarget(void) const;

	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& rhs);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);
	~RobotomyRequestForm();
};

#endif
