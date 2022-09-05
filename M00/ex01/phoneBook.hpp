/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:58:06 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/15 15:03:00 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"
# include <exception>

class PhoneBook
{
    private:
        Contact cnt[8];
        int     lastElem;
        int     numberOfElem;

    public:
        void    addContact(void);
        void    searchContact(void);
        void    exitPrograme(void);
    
	PhoneBook();
    ~PhoneBook();
};

#endif
