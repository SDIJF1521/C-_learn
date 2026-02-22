#include <iostream>
#include <variant>
#include <string>
#include <windows.h>

struct Test{
    std::string name;
    std::variant<int, float> member;
};

int main(){
    SetConsoleOutputCP(CP_UTF8);
    std::variant<int, float> v1 = 100;
    Test t1;
    t1 = {"hello", 3.14f};
    std::cout << "name: " << t1.name << std::endl;
    std::cout << "member: " << std::get<float>(t1.member) << std::endl;
    std::cout << "v1: " << std::get<int>(v1) << std::endl;
}