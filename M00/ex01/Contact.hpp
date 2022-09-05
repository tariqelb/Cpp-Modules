/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:54:55 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/14 16:22:30 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private:
        std::string		firstName;
        std::string		lastName;
        std::string		nickName;
        std::string		phoneNumber;
        std::string		darkestSecret;

    public:
        void    		setFirstName(std::string s);
        void    		setLastName(std::string s);
        void    		setNickName(std::string s);
        void    		setPhoneNumber(std::string s);
        void    		setDarkestSecret(std::string s);
        std::string		getFirstName(void);
        std::string		getLastName(void);
        std::string		getNickName(void);
        std::string		getNumberPhone(void);
        std::string		getDarkestSecret(void);
    
    Contact();
    ~Contact();
};

#endif
