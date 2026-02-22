#include<iostream>
int main(void){
    auto i = 42; // i 被推导为 int 类型
    auto d = 3.14; // d 被推导为 double 类型
    auto s = "Hello, World!"; // s 被推导为 const char* 类型
    std::cout << "i = " << i << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "s = " << s << std::endl;
}