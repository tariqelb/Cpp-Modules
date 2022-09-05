/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:08:39 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/15 22:56:17 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    std::string cmd;
    PhoneBook   p;

    std::cout << "Available commands is : [ADD], [SEARCH], [EXIT]\n";
    std::cout << "Enter Your Command:\n";
	std::getline(std::cin, cmd);
	if (std::cin.eof())
        return (0);
    while (1)
    {
        if (cmd.compare("ADD") == 0)
            p.addContact();
        else if (cmd.compare("SEARCH") == 0)
            p.searchContact();
        else if (cmd.compare("EXIT") == 0)
            p.exitPrograme();
        std::cout << "Enter Your Command:\n";
		std::getline(std::cin, cmd);
        if (std::cin.eof())
            return (0);
    }
    return (0);
}
