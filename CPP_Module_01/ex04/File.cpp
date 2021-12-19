#include "File.hpp"
#include <iostream>
#include <fstream>

#define ERROR 1

int File::replace(std::string &fileName, std::string &s1, std::string &s2)
{
    std::ifstream f1(fileName);
    std::ofstream f2(fileName + ".replace");
    std::string     buf;

    if (!f1.is_open())
    {
        std::cout << "open failed!" << std::endl;
        return (ERROR);
    }
    std::cout << "open success!" << std::endl;
    while (std::getline(f1, buf))
    {
        if (buf.find(s1) != std::string::npos)
            buf.replace(buf.find(s1), s1.length(), s2);
        f2 << buf << std::endl;
    }    
    return (0);
}

File::File(void)
{

}
File::~File(void)
{

}