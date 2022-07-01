#include <iostream>

int main()
{
    std::string str;
    std::string *ptr;
    std::string& ref = str;

    str = "HI THIS IS BRAIN";
    ptr = &str;
    ref = str;

    std::cout << &str << "\n";
    std::cout << ptr << "\n";
    std::cout << &ref << "\n";

    std::cout << str << "\n";
    std::cout << *ptr << "\n";
    std::cout << ref << "\n";

    return (0);
}