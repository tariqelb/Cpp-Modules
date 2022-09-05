/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:30:28 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 17:39:03 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"

class Intern  
{
	public :
		Form*	makeForm(const std::string& name, const std::string& target);
	
	Intern();
	Intern(const Intern& rhs);
	Intern&	operator=(const Intern& rhs);
	~Intern();
};

#endif
