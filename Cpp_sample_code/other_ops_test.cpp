#include <iostream>
#include <variant>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::variant<int, std::string> v;
    
    // 使用emplace构造
    v.emplace<std::string>("Hello World");
    std::cout << "值: " << std::get<std::string>(v) << std::endl;
    
    // 使用get_if
    if (auto p = std::get_if<std::string>(&v)) {
        std::cout << "get_if获取到的值: " << *p << std::endl;
    }
    
    v = 200;
    if (auto p = std::get_if<int>(&v)) {
        std::cout << "get_if获取到的值: " << *p << std::endl;
    }
}