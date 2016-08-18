// 下面的这段代码可以测试你的编译器对正则表达式的支持情况
#include <iostream>
#include <regex>

int main()
{
    std::regex r1("S");
    printf("S works.\n");
    std::regex r2(".");
    printf(". works.\n");
    std::regex r3(".+");
    printf(".+ works.\n");
    std::regex r4("[0-9]");
    printf("[0-9] works.\n");
    return 0;
}
