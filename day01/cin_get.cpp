#include <iostream>

int main() {
    char ch;
    
    std::cout << "请输入一个字符：";
    ch = std::cin.get(); // 读取一个单个字符
    
    std::cout << "你输入的字符是：" << ch << std::endl;
    
    return 0;
}