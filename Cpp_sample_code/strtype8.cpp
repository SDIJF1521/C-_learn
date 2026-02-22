#include <iostream>
#include <string>
#include <cstring>
int main(){
    char charr[20] = "hello";
    std::string str = "world";
    std::cout << charr << std::endl;
    std::cout << str << std::endl;
    std::cout << R"(hello\nworld)" << std::endl;
}