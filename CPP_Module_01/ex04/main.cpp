#include <iostream>
#include <fstream>

int replace(std::string &fileName, std::string &s1, std::string &s2) {
	std::ifstream	fin(fileName);
	std::ofstream	fout;
	std::string		buf;
	int				pos;

	if (s1.empty() || s2.empty())
		return -1;
	if (!fin.is_open()) {
		std::cout << "open failed!" << std::endl;
		return -1;
	}
	std::cout << "open success!" << std::endl;
	fout.open(fileName + ".replace");
	while (std::getline(fin, buf)) {
		pos = 0;
		for (int i = 0; buf.find(s1, i) != std::string::npos;) {
            pos = buf.find(s1, i);
			buf.erase(pos, s1.size());
			buf.insert(pos, s2);
			i += s2.size();
		}
		fout << buf << std::endl;
	}
	return 0;
}

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
    replace(fileName, s1, s2);
    return (0);
}