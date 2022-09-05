/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:42:21 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 16:43:53 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private :
		std::string	target;

	public :
		void			execute(Bureaucrat const & b) const;
		std::string		getTarget(void) const;

	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& rhs);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);
	~PresidentialPardonForm();
};

#endif
