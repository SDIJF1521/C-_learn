#include <iostream>
#include <variant>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::variant<int, float, std::string> v;
    
    // 访问int类型
    v = 100;
    std::visit([](auto&& arg) {
        std::cout << "值: " << arg << ", 类型: int" << std::endl;
    }, v);
    
    // 访问float类型
    v = 3.14f;
    std::visit([](auto&& arg) {
        std::cout << "值: " << arg << ", 类型: float" << std::endl;
    }, v);
    
    // 访问string类型
    v = "Hello";
    std::visit([](auto&& arg) {
        std::cout << "值: " << arg << ", 类型: string" << std::endl;
    }, v);
}