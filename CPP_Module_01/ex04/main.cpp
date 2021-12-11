#include "File.hpp"

int main(int argc, char **argv)
{
    std::string fileName;
    std::string s1;
    std::string s2;

    if (argc == 4)
    {
        fileName = argv[1];
        s1 = argv[2];
        s2 = argv[3];
    }
    else
        return (0);
    File::replace(fileName, s1, s2);
    return (0);
}