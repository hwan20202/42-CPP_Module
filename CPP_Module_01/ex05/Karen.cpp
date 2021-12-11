#include "Karen.hpp"
#include <iostream>

typedef struct  s_compass
{
    std::string funcName;
    void        (Karen::*f)();
}               t_compass;

void    Karen::debug(void)
{
    std::cout << "debug" << std::endl;
}
void    Karen::info(void)
{
    std::cout << "info" << std::endl;
}
void    Karen::warning(void)
{
    std::cout << "warning" << std::endl;
}
void    Karen::error(void)
{
    std::cout << "error" << std::endl;
}
void    Karen::complain(std::string level)
{
    t_compass   arr[4] = {
        {"debug", &Karen::debug},
        {"info", &Karen::info},
        {"warning", &Karen::warning},
        {"error", &Karen::error}
    };

    for(int i = 0; i < 4; i++)
    {
        if (arr[i].funcName == level)
        {
            (this->*(arr[i].f))();
            return ;
        }
    }
    std::cout << "no fucntion" << std::endl;
}

Karen::Karen(void)
{

}
Karen::~Karen(void)
{

}