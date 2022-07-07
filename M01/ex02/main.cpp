#include <iostream>

int main()
{
    std::string str;
    std::string *stringPTR;
    std::string& stringREF = str;

    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    stringREF = str;

    std::cout << &str << "\n";
    std::cout << stringPTR << "\n";
    std::cout << &stringREF << "\n";

    std::cout << str << "\n";
    std::cout << *stringPTR << "\n";
    std::cout << stringREF << "\n";

    return (0);
}