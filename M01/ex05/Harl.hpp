#ifndef _HARL_H_
# define _HARL_H_

# include <iostream>

class harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    
    public:
        void    complain(std::string level);
};

#endif