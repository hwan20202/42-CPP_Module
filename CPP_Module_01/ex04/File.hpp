#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>

class File
{
public:
    static int    replace(std::string &fileName, std::string &s1, std::string &s2);
    
    
    File(void);
    ~File(void);
};

#endif
