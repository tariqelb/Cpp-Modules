/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:03:48 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/17 18:37:04 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>


class Sed
{
    public:
        std::ifstream		inFd;
        std::ofstream		outFd;
        std::string			s1;
        std::string			s2;
        std::string			buff;
		std::string			outputfile;
		std::string const	rep;

	Sed(std::string rep);
	~Sed();
};

void    sedFun(Sed* fileObj);

#endif
