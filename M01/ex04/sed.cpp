/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:04:29 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/18 18:05:04 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string replace):rep(replace){}

Sed::~Sed(){}

std::string    replaceString(Sed *fileObj, std::string buff)
{
    int buffLen;
    int repLen;
    int s1Len;
    int pos;

    repLen = fileObj->s2.length();
    pos = 0;
    buffLen = buff.length();
    s1Len = fileObj->s1.length();
    pos = buff.find(fileObj->s1);
    while (pos != -1) 
    {
        buff = buff.substr(0, pos) + fileObj->s2 + buff.substr(pos + s1Len, buff.length());
        pos = buff.find(fileObj->s1);
    }
    return (buff);
}

void    sedFun(Sed* fileObj)
{
    std::stringstream   buffer;
    std::string         buff;
    int                 len;
    int                 i;

    buffer << fileObj->inFd.rdbuf();
	if (buffer.fail())
	{
		std::cerr << "Fail to read the input file" << std::endl;
		return;
	}
    len = 0;
    i = 0;
    fileObj->buff = buffer.str();
    while (std::getline(buffer, buff))
    {
        if (i == 0)
            len = buff.length() + len;
        else
            len = len + buff.length() + 1; 
        i++;
        buff = replaceString(fileObj, buff);
        fileObj->outFd << buff;
        if (fileObj->buff[len] == '\n')
            fileObj->outFd << "\n";
    }
}
