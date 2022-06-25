#include "phoneBook.hpp"

void    contact::setFirstName(std::string s)
{
    firstName = s;
}

void    contact::setLastName(std::string s)
{
    lastName = s;
}

void    contact::setNickName(std::string s)
{
    nickName = s;
}

void    contact::setPhoneNumber(std::string s)
{
    phoneNumber = s;
}

void    contact::setDarkSecret(std::string s)
{
    darkSecret = s;
}

std::string  contact::getFirstName(void)
{
    return (firstName);
}

std::string  contact::getLastName(void)
{
    return (lastName);
}

std::string  contact::getNickName(void)
{
    return (nickName);
}

std::string  contact::getNumberPhone(void)
{
    return (phoneNumber);
}

std::string  contact::getDarkSecret(void)
{
    return (darkSecret);
}

contact::contact()
{
    setFirstName("");
    setLastName("");
    setNickName("");
    setPhoneNumber("");
    setDarkSecret("empty");
}

contact::~contact()
{
    //cout << "weeee" << "\n";
}

void    phoneBook::setLastElem(void)
{
    lastElem = lastElem + 1;
    if (lastElem == 8)
        lastElem = 0;
}

int    phoneBook::getLastElem(void)
{
    return (lastElem);
}

void    phoneBook::setNumberOfElem(void)
{
    if (numberOfElem < 8)
        numberOfElem++;
}

int    phoneBook::getNumberOfElem(void)
{
    return (numberOfElem);
}

int isStringOfDigit(std::string str)
{
    int i;

    i = 0;
    while (i < str.length())
    {
        if (isdigit(str[i]) != 1)
            return (0);
        i++;
    }
    return (1);
}

void    phoneBook::addContact(void)
{
    int i;
    int j;
    int flag;
    std::string data[5];

    std::cout << "Enter the first name:\n";
    std::getline(std::cin, data[0]);
    std::cout << "Enter the last name:\n";
    std::getline(std::cin, data[1]);
    std::cout << "Enter the nick name:\n"; 
    std::getline(std::cin, data[2]);
    std::cout << "Enter the dark secrit:\n";
    std::getline(std::cin, data[4]);
    std::cout << "Enter the number phone (only numbers):\n";
    i = 0;
    j = 0;
    while (j < 3)
    {
        flag = 0;
        std::getline(std::cin, data[3]);
        while (i < data[3].length())
        {
            if (isdigit(data[3][i]) != 1)
            {
                if (j == 2)
                {
                    std::cerr << "this contact is discarded !!" << std::endl;
                    return ;
                }
                else
                {
                    std::cout << "Phone number is a conbinition of numbers pls!!" << std::endl;
                    std::cout << "Enter the number phone:\n";
                }
                flag = 1;
                break;
            }
            i++;
        }
        j++;
        if (flag == 0 || j == 3)
            break;
    }
    if (data[0].length() == 0 || data[1].length() == 0 || data[2].length() == 0
        || data[3].length() == 0 || data[4].length() == 0)
        return;
    cnt[lastElem].setFirstName(data[0]);
    cnt[lastElem].setLastName(data[1]);
    cnt[lastElem].setNickName(data[2]);
    cnt[lastElem].setPhoneNumber(data[3]);
    cnt[lastElem].setDarkSecret(data[4]);
    setLastElem();
    setNumberOfElem();
}

void    phoneBook::searchContact(void)
{
    std::string buff;
    int         i;
    int         index;

    index = -1;
    i = 0;
    std::cout << std::right << std::setw(10) << "Index" << "|";
    std::cout << std::right << std::setw(10) << "FirstName" << "|";
    std::cout << std::right << std::setw(10) << "LastName" << "|";
    std::cout << std::right << std::setw(10) << "NickName" << "\n";
    while (i < 8)
    {
        if (cnt[i].getFirstName().length() != 0)
        {
            std::cout << std::right << std::setw(10) << i << "|";
            std::cout << std::right << std::setw(10) << cnt[i].getFirstName() << "|";
            std::cout << std::right << std::setw(10) << cnt[i].getLastName() << "|";
            std::cout << std::right << std::setw(10) << cnt[i].getNickName() << "\n";
        }
        i++;
    }
    std::getline(std::cin, buff);
    if (isStringOfDigit(buff) == 0)
    {
        std::cout << "wrong index search operation is done bay\n";
        return ;
    }
    index = stoi(buff);
    if (index + 1 <= numberOfElem && index + 1 > 0)
    {
        std::cout << std::right << std::setw(10) << cnt[index].getFirstName() << "|";
        std::cout << std::right << std::setw(10) << cnt[index].getLastName() << "|";
        std::cout << std::right << std::setw(10) << cnt[index].getNickName() << "|";
        std::cout << std::right << std::setw(10) << cnt[index].getNumberPhone() << "|";
        std::cout << std::right << std::setw(10) << cnt[index].getDarkSecret() << "\n";
    }
}

void    phoneBook::exitPrograme(void)
{
    exit(0);
}

phoneBook::phoneBook()
{
    lastElem = 0;
    numberOfElem = 0;
}

phoneBook::~phoneBook()
{
    //cout << "weeee" << "\n";
}
