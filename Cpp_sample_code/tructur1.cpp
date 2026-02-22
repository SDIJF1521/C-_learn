#include<iostream>
#include <string>
#include <windows.h>
struct student{
    std::string name;
    int age;
    float height;
};
int main(){
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    student stu = {
        "张三",
        18,
        1.75
    };
    cout << "姓名: _______\b\b\b\b\b\b\b";
    getline(cin,stu.name);
    cout << "姓名: " << stu.name << endl;
    cout << "年龄: " << stu.age << endl;
    cout << "身高: " << stu.height << endl;
    return 0;

} 