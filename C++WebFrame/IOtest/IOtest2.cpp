//
//int >> char: int >> stringstream >> char*
//
#include <sstream>
#include <iostream>

int main()
{
	std::stringstream stream;
	char result[6];
	stream << 12345;
	stream >> result;
	std::cout << *result << std::endl;
}
