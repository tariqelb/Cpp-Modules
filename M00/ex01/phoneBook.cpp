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

void    contact::setDarkestSecret(std::string s)
{
    darkestSecret = s;
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

std::string  contact::getDarkestSecret(void)
{
    return (darkestSecret);
}

contact::contact()
{
    setFirstName("");
    setLastName("");
    setNickName("");
    setPhoneNumber("");
    setDarkestSecret("");
}

contact::~contact(){}

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
    std::cout << "Enter the dark secret:\n";
    std::getline(std::cin, data[4]);
    std::cout << "Enter the number phone:\n";
    std::getline(std::cin, data[3]);
    if (data[0].length() == 0 || data[1].length() == 0 || data[2].length() == 0
        || data[3].length() == 0 || data[4].length() == 0)
        return;
    cnt[lastElem].setFirstName(data[0]);
    cnt[lastElem].setLastName(data[1]);
    cnt[lastElem].setNickName(data[2]);
    cnt[lastElem].setPhoneNumber(data[3]);
    cnt[lastElem].setDarkestSecret(data[4]);
    setLastElem();
    setNumberOfElem();
}


void    displaySting(std::string s)
{
    if (s.length() > 10)
        std::cout << std::right << std::setw(9) << s.substr(0, 9) << ".";        
    else
        std::cout << std::right << std::setw(10) << s;
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
    while (i < numberOfElem)
    {
        std::cout << std::right << std::setw(10) << i << "|";
        displaySting(cnt[i].getFirstName());
        std::cout << "|";
        displaySting(cnt[i].getLastName());
        std::cout << "|";
        displaySting(cnt[i].getNickName());
        std::cout << "\n";
        i++;
    }
    std::getline(std::cin, buff);
    if (isStringOfDigit(buff) == 0)
    {
        std::cout << "wrong index search operation is done.\n";
        return ;
    }
    index = stoi(buff);
    if (index + 1 <= numberOfElem && index + 1 > 0)
    {
        std::cout << "FirstName:     " << cnt[index].getFirstName() << "\n";
        std::cout << "LastName:      " << cnt[index].getLastName() << "\n";
        std::cout << "NickName:      " << cnt[index].getNickName() << "\n";
        std::cout << "PhoneNumber:   " << cnt[index].getNumberPhone() << "\n";
        std::cout << "DarkestSecret: " << cnt[index].getDarkestSecret() << "\n";
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

phoneBook::~phoneBook(){}
