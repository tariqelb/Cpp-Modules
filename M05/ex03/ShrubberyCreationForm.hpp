/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:37:22 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 16:37:48 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define  SHRUBBERYCREATIONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	private :
		std::string	target;

	public :
		void			execute(Bureaucrat const & b) const;
		std::string		getTarget(void) const;

	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& rhs);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);
	~ShrubberyCreationForm();
};

void	ft_draw_tree(std::ofstream& ofile);

#endif
