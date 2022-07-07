#include "phoneBook.hpp"

int main()
{
    std::string cmd;
    phoneBook   p;

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