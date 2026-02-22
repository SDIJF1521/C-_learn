#include <iostream>
#include <variant>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::variant<int, float, std::string> v;
    
    v = 100;
    std::cout << "当前类型索引: " << v.index() << std::endl;
    std::cout << "是否为int类型: " << std::holds_alternative<int>(v) << std::endl;
    std::cout << "是否为float类型: " << std::holds_alternative<float>(v) << std::endl;
    
    v = 3.14f;
    std::cout << "当前类型索引: " << v.index() << std::endl;
    std::cout << "是否为int类型: " << std::holds_alternative<int>(v) << std::endl;
    std::cout << "是否为float类型: " << std::holds_alternative<float>(v) << std::endl;
}