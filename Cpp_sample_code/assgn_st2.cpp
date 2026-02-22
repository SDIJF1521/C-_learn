#include <iostream>
#include <cstring>
#include <windows.h>

struct Person {
    char* name;
    int age;
};
int main(){
    SetConsoleOutputCP(CP_UTF8);
    Person p1;
    p1.name = new char[10];
    strcpy(p1.name, "Alice");
    p1.age = 25;

    Person p2 = p1;  // 浅拷贝
    p2.name[5] = 'X';
    p2.name[6] = '\0';
    std::cout << "p1.name: " << p1.name << std::endl;
    std::cout << "p2.name: " << p2.name << std::endl;
    std::cout << "p1地址: " << &p1 << std::endl;
    std::cout << "p2地址: " << &p2 << std::endl;
}