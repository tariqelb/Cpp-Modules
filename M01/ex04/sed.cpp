#include "main.hpp"

#include <sstream>

void    operation(std::string buff, int len)
{
    char    *split;
    char    str[len + 1];
    int     i;

    i = 0;
    strcpy(str, buff.c_str());

    split = strtok(str, "\t\n\v\r ");     
    while (split != NULL)
    {
        std::cout << split;
        split = strtok(NULL, "\t\n\v\r ");
        i++;
    }
    while (split[i])
    {
        std::cout << split[i];
        i++;
    }
}

std::string    replacestring(sed *fileObj, std::string buff)
{
    int pos;
    int repLen;
    int buffLen;
    int s1Len;

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

void    sedFun(sed* fileObj)
{
    int                 len;
    int                 i;
    std::stringstream   buffer;
    std::string         buff;

    buffer << fileObj->inFd.rdbuf();
    len = 0;
    i = 0;
    int index;
    fileObj->buff = buffer.str();
    while (std::getline(buffer, buff))
    {
        if (i == 0)
            len = buff.length() + len;
        else
            len = len + buff.length() + 1; 
        i++;
        buff = replacestring(fileObj, buff);
        fileObj->outFd << buff;
        if (fileObj->buff[len] == '\n')
            fileObj->outFd << "\n";
    }
}