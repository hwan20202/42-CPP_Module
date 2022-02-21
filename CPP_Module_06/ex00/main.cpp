#include <iostream>
#include <string>

#include "Convert.hpp"

#define GRN "\e[0;32m"
#define RED "\e[0;31m"
#define NC "\e[0m"

#define INT1	"0"
#define INT2	"42"
#define	INT3	"500"

#define FLOAT1	"0.0f"
#define FLOAT2	"4.2f"
#define FLOAT3	"-4.2f"
#define	FLOAT4	"nanf"
#define	FLOAT5	"inff"
#define	FLOAT6	"-inff"

#define DOUBLE1	"0.0"
#define	DOUBLE2	"4.2"
#define	DOUBLE3	"-4.2"
#define	DOUBLE4	"nan"
#define	DOUBLE5	"inf"
#define	DOUBLE6	"-inf"

int	main(int argc, char** argv) {
	Convert	con("asd");

	//숫자가 아닐 경우 예외처리 확실히 하기, 부호 모호성, 부호 중첩 예외처리 체크하기

	std::cout << con << std::endl;
	return 0;
}
