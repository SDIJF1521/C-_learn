#include <iostream>
#include <string>
#include <windows.h>

struct student{
    char name[20];
};
int main(){
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);
    student stu1, stu2;
    strcpy(stu1.name, "张三");
    stu2 = stu1; // 正确
    std::cout << "stu1: " << stu1.name << std::endl;
    std::cout << "stu2: " << stu2.name << std::endl;
}