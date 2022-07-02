#include "main.hpp"

void    sedFun(sed* fileObj)
{
    int i;
    char ch;

    i = 0;
    fileObj->buff = "";
    while (!fileObj->inFd.eof())
    {   
        fileObj->inFd >> std::noskipws >> ch;
        if (fileObj->inFd.fail())
            return;
        else if (isspace(ch))
        {
            if (fileObj->buff.compare(fileObj->s1) == 0)
                {
                    fileObj->outFd << fileObj->s2;
                }
            else
                fileObj->outFd << fileObj->buff;
            fileObj->outFd << ch;
            fileObj->buff = "";
        }
        else
            fileObj->buff += ch;
        ch = 0;
    }
    if (fileObj->buff.length() != 0)
    {
       if (fileObj->buff.compare(fileObj->s1) == 0)
            fileObj->outFd << fileObj->s2;
        else
            fileObj->outFd << fileObj->buff; 
    }
}