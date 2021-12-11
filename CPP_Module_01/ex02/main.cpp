#include <iostream>

int main(void)
{
    std::string s("HI THIS IS BRAIN");
    std::string *strPTR = &s;
    std::string &strREF = s;

    std::cout << "Address of original string : [" << &s << "]" << std::endl
                << "Address of stringPTR : [" << strPTR << "]" << std::endl
                << "Address of stringREF : [" << &strREF << "]" << std::endl;

    std::cout << "string : [" << *strPTR << "]" << std::endl
                << "string : [" << strREF << "]" << std::endl;

    return (0);
}