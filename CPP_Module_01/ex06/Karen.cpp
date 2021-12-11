#include "Karen.hpp"
#include <iostream>

class   myPair
{
private:
    std::string funcName;
    void        (Karen::*func)();
public:
    bool compare(std::string s);
    void callFunc(Karen *obj);
    myPair(std::string name, void (Karen::*f)());
    ~myPair(void);
};

bool myPair::compare(std::string s)
{
    if (funcName == s)
        return (true);
    return (false);
}
void myPair::callFunc(Karen *obj)
{
    (obj->*func)();
}
myPair::myPair(std::string name, void (Karen::*f)())
{
    funcName = name;
    func = f;
}
myPair::~myPair(void)
{

}

class   myArray
{
private:
    unsigned int _size;
    myPair *_arr;

public:
    int find(std::string s);
    myPair  &at(unsigned int idx);
    myArray(unsigned int size, myPair *arr);
    ~myArray();
};

int myArray::find(std::string s)
{
    for(int i = 0; i < _size; i++)
    {
        if (_arr[i].compare(s))
            return (i);
    }
    return (-1);
}
myPair  &myArray::at(unsigned int idx)
{
    return (_arr[idx]);
}
myArray::myArray(unsigned int size, myPair *arr)
{
    _size = size;
    _arr = arr;
}
myArray::~myArray()
{

}

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
    myPair   tmp[4] = {
        myPair("debug", &Karen::debug),
        myPair("info", &Karen::info),
        myPair("warning", &Karen::warning),
        myPair("error", &Karen::error)
    };
    myArray    arr(4, tmp);
    int Num = arr.find(level);

    switch(Num)
    {
        case 0:
            arr.at(0).callFunc(this);
        case 1:
            arr.at(1).callFunc(this);
        case 2:
            arr.at(2).callFunc(this);
        case 3:
            arr.at(3).callFunc(this);
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

Karen::Karen(void)
{

}
Karen::~Karen(void)
{

}