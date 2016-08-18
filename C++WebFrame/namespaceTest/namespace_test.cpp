//
// main.cpp
//

#include <iostream>
#include "web.hpp"
#include "web2.hpp"

int main(){
	std::cout << "hello word!" << std::endl;
	std::cout << "shiyanlou_web_server, port=" << shiyanlou_web_server::port << std::endl;
	std::cout << "shiyanlou_web_server, port=" << shiyanlou_web2_server::port << std::endl;
	return 0;
}
