/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:59:02 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/14 16:21:53 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setFirstName(std::string s)
{
    firstName = s;
}

void    Contact::setLastName(std::string s)
{
    lastName = s;
}

void    Contact::setNickName(std::string s)
{
    nickName = s;
}

void    Contact::setPhoneNumber(std::string s)
{
    phoneNumber = s;
}

void    Contact::setDarkestSecret(std::string s)
{
    darkestSecret = s;
}

std::string  Contact::getFirstName(void)
{
    return (firstName);
}

std::string  Contact::getLastName(void)
{
    return (lastName);
}

std::string  Contact::getNickName(void)
{
    return (nickName);
}

std::string  Contact::getNumberPhone(void)
{
    return (phoneNumber);
}

std::string  Contact::getDarkestSecret(void)
{
    return (darkestSecret);
}

Contact::Contact()
{
    setFirstName("");
    setLastName("");
    setNickName("");
    setPhoneNumber("");
    setDarkestSecret("");
}

Contact::~Contact()
{}
