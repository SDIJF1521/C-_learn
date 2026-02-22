#include <iostream>
#include <string>
#include <windows.h>

struct info{
    std::string name;
    int age;
    double height;
};
int main(){
    SetConsoleOutputCP(CP_UTF8);
    info stu[3];
    for(int i = 0; i < 3; i++){
        std::cout << "请输入第" << i+1 << "个学生的姓名、年龄、身高：" << std::endl;
        std::cin >> stu[i].name >> stu[i].age >> stu[i].height;
    };
    for(int i = 0; i < 3; i++){
        std::cout << "第" << i+1 << "个学生的信息为：" << std::endl;
        std::cout << "姓名：" << stu[i].name << std::endl;
        std::cout << "年龄：" << stu[i].age << std::endl;
        std::cout << "身高：" << stu[i].height << std::endl;
    };
}