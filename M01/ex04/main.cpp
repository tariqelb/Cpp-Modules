/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:04:04 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/17 17:22:06 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
    Sed fileObj(".replace");

    if (ac != 4)
    {
        std::cerr << "Unvalide number of arguments" << std::endl;
        return (1);
    }
    if (av[1][0] == 0 || av[2][0] == 0 || av[3][0] == 0)
    {
        std::cerr << "Argument can't be empty string" << std::endl;
        return (1); 
    }
    fileObj.inFd.open(av[1], std::ios::in);
    if (!fileObj.inFd.is_open())
    {
        std::cerr << "error in file opening" << std::endl;
        return (1);
    }
    fileObj.outputfile = av[1] + fileObj.rep;
    fileObj.outFd.open(fileObj.outputfile, std::ios::out);
    if (!fileObj.outFd.is_open())
    {
        fileObj.inFd.close();
        std::cerr << "error in opening output file" << std::endl;
        return (1);
    }
    fileObj.s1 = av[2];
    fileObj.s2 = av[3];
    sedFun(&fileObj);
    fileObj.inFd.close();
    fileObj.outFd.close();
    return (0);
}
