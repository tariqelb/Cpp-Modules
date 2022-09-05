/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:04:32 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/15 22:58:30 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

int isStringOfDigit(std::string str)
{
    int i;
	int	len;

    i = 0;
	len = str.length();
    while (i < len)
    {
        if (isdigit(str[i]) != 1)
            return (0);
        i++;
    }
    return (1);
}

int		checkValideData(std::string data[5])
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < 5)
	{
		len = data[i].length();
		if (len == 0)
			return (1);	
		j = 0;
		while (j < len)
		{
			if (!isprint(data[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

std::string	getData(void)
{
	std::string	data;

	std::getline(std::cin, data);
	if (std::cin.eof())
		exit(0);
	return (data);
}

void    PhoneBook::addContact(void)
{
    std::string	data[5];

   	std::cout << "Enter the first name:" << std::endl;
    data[0] = getData();
	std::cout << "Enter the last name:" << std::endl;
    data[1] = getData();
    std::cout << "Enter the nick name:" << std::endl; 
    data[2] = getData();
    std::cout << "Enter the dark secret:" << std::endl;
    data[4] = getData();
    std::cout << "Enter the number phone:" << std::endl;
    data[3] = getData();
   	if (checkValideData(data))
		return;
    cnt[lastElem].setFirstName(data[0]);
    cnt[lastElem].setLastName(data[1]);
    cnt[lastElem].setNickName(data[2]);
    cnt[lastElem].setPhoneNumber(data[3]);
    cnt[lastElem].setDarkestSecret(data[4]);
    lastElem = lastElem + 1;
    if (lastElem == 8)
        lastElem = 0;
    if (numberOfElem < 8)
        numberOfElem++;
}

void    displaySting(std::string s)
{
    if (s.length() > 10)
        std::cout << std::right << std::setw(9) << s.substr(0, 9) << ".";        
    else
        std::cout << std::right << std::setw(10) << s;
}

void    PhoneBook::searchContact(void)
{
    std::string buff;
    int         i;
    int         index;

    index = -1;
    i = 0;
    std::cout << std::right << std::setw(10) << "Index" << "|";
    std::cout << std::right << std::setw(10) << "FirstName" << "|";
    std::cout << std::right << std::setw(10) << "LastName" << "|";
    std::cout << std::right << std::setw(10) << "NickName" << std::endl;
    while (i < numberOfElem)
    {
        std::cout << std::right << std::setw(10) << i << "|";
        displaySting(cnt[i].getFirstName());
        std::cout << "|";
        displaySting(cnt[i].getLastName());
        std::cout << "|";
        displaySting(cnt[i].getNickName());
        std::cout << std::endl;
        i++;
    }
	if (!(std::cin >> index))
	{
		if (std::cin.eof())
			exit(1);
        std::cerr << "wrong index search operation is done." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;	
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	
    if (index + 1 <= numberOfElem && index + 1 > 0)
    {
        std::cout << "FirstName:     " << cnt[index].getFirstName() << std::endl;
        std::cout << "LastName:      " << cnt[index].getLastName() << std::endl;
        std::cout << "NickName:      " << cnt[index].getNickName() << std::endl;
        std::cout << "PhoneNumber:   " << cnt[index].getNumberPhone() << std::endl;
        std::cout << "DarkestSecret: " << cnt[index].getDarkestSecret() << std::endl;
    }
	else
        std::cerr << "wrong index search operation is done." << std::endl;
}

void    PhoneBook::exitPrograme(void)
{
    exit(0);
}

PhoneBook::PhoneBook()
{}

PhoneBook::~PhoneBook()
{}
