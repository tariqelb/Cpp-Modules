#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>

class contact
{
    private:
        std::string  firstName;
        std::string  lastName;
        std::string  nickName;
        std::string  phoneNumber;
        std::string  darkSecret;

    public:
        void    setFirstName(std::string s);
        void    setLastName(std::string s);
        void    setNickName(std::string s);
        void    setPhoneNumber(std::string s);
        void    setDarkSecret(std::string s);
        std::string  getFirstName(void);
        std::string  getLastName(void);
        std::string  getNickName(void);
        std::string  getNumberPhone(void);
        std::string  getDarkSecret(void);
    
    contact();
    ~contact();
};

class phoneBook
{
    private:
        contact cnt[8];
        int     lastElem;
        int     numberOfElem;

    public:
        void    addContact(void);
        void    searchContact(void);
        void    exitPrograme(void);
        void    setLastElem(void);
        int     getLastElem(void);
        void    setNumberOfElem(void);
        int     getNumberOfElem(void);
    phoneBook();
    ~phoneBook();
};

#endif