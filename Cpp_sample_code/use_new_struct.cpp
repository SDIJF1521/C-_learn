#include <iostream>
#include <string>
#include <windows.h>

struct Person {
    std::string name;
    int age;
};

int main(){
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);
    Person *p = new Person; // 创建动态结构体
    cout << "请输入姓名: ";
    getline(cin, p->name); // 访问成员变量 name
    cout << "请输入年龄: ";
    cin >> p->age; // 访问成员变量 age
    cout << "姓名: " << p->name << endl; // 输出姓名
    cout << "年龄: " << p->age << endl; // 输出年龄
    delete p; // 释放内存
    p = nullptr; // 避免悬空指针错误
}