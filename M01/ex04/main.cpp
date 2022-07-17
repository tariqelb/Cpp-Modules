#include "main.hpp"

int main(int ac, char **av)
{
    sed fileObj;
    std::string outputName;
    std::string rep;

    rep = ".replace";

    if (ac != 4)
    {
        std::cerr << "Unvalide number of arguments\n";
        return (1);
    }
    if (av[1][0] == 0 || av[2][0] == 0 || av[3][0] == 0)
    {
        std::cerr << "Argument can't be empty string\n";
        return (1); 
    }
    fileObj.inFd.open(av[1], std::ios::in);
    if (!fileObj.inFd.is_open())
    {
        std::cerr << "error in file opening\n";
        return (1);
    }
    outputName = av[1] + rep;
    fileObj.outFd.open(outputName, std::ios::out);
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