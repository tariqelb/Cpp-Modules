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

void    sedFun(sed* fileObj)
{
    int                 i;
    std::stringstream   buffer;
    std::string         buff;

    buffer << fileObj->inFd.rdbuf();
    i = 0;
    int index;
    fileObj->buff = buffer.str();
    while (std::getline(buffer, buff))
    {
        
        operation(buff, buff.length());
        /*
        if (index = (buff.find(fileObj->s1) != nows))
            std::cout << "found\n";
        else
            std::cout << "not found\n";*/
        //if (isspace(fileObj->buff[i]))
         //   std::cout << fileObj->buff[i];

        /*std::cout << buff.find(fileObj->s1);
        std::cout << "[" << buff << "]" << "{" << buff.length() << "}";
        
        //else
        //    std::cout << "{{" << fileObj->buff[i] << " " << i << "}} ";*/
    }
}