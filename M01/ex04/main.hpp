#ifndef _MAIN_H_
# define _MAIN_H_

#include <iostream>
#include <string>
#include <fstream>

class sed
{
    public:
        std::ifstream   inFd;
        std::ofstream   outFd;
        std::string     s1;
        std::string     s2;
        std::string     buff;
};

void    sedFun(sed* fileObj);
void    operation(std::string buff);

#endif