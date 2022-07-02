#include "main.hpp"

int main(int ac, char **av)
{
    sed fileObj;
    
    if (ac != 4)
    {
        std::cerr << "invalide number of arguments\n";
        return (1);
    }
    fileObj.inFd.open(av[1], std::ios::in);
    if (!fileObj.inFd.is_open())
    {
        std::cerr << "error in file openoing\n";
        return (1);
    }
    fileObj.outFd.open("output.replace", std::ios::out);
    if (!fileObj.outFd.is_open())
    {
        fileObj.inFd.close();
        std::cerr << "error in opening output file\n";
        return (1);
    }
    fileObj.s1 = av[2];
    fileObj.s2 = av[3];
    sedFun(&fileObj);
    fileObj.inFd.close();
    fileObj.outFd.close();
    return (0);
}