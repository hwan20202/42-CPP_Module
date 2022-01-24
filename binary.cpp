

int main() {

	float af = 10.1;
	flaot tmp;

	std::cout << std::bitset<32>(af) << std::endl;
	tmp = af * (1 << 8);
	std::cout << std::bitset<32>(tmp) << std::endl;
	tmp = af * (1 << 12);
	std::cout << std::bitset<32>(tmp) << std::endl;
	tmp = af * (1 << 16);
	std::cout << std::bitset<32>(tmp) << std::endl;
	tmp = af * (1 << 20);
	std::cout << std::bitset<32>(tmp) << std::endl;
}


3
00011

1.5
00001.1

0.75
00000.11

10.1231415
23123.123123

231231231.23