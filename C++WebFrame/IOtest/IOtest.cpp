//
//int >> string: int >> stringstream >> string
//

#include <string>
#include <sstream>
#include <iostream>

int main(){
	// std::stringstream 支持读写
	std::stringstream stream;
	std::string result;
	int number = 12345;
	stream << number;	// 将 number 输入 stream
	stream >> result; 	// 从 stream 读取到 result
	std::cout << result << std::endl; 	// 输出字符串 "12345"
}
