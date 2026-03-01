#include <iostream>
#include <string>
#include <windows.h>

enum Gender {
    MALE=0,
    FEMALE=1
};

union Data {
    int i;
    double d;
    char c;
    Gender g;
};

struct Student {
    std::string name;
    int age;
    Data data;
    Data data1;
};

int main(){
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);
    Student *test = new Student;
    test->name = "张三";
    test->age = 30;
    test->data.g = MALE;
    test -> data1.d = 3.14;
    cout << "姓名: " << test->name << endl; // 输出姓名
    cout << "年龄: " << test->age << endl; // 输出年龄
    cout << "性别: " << (test->data.g == MALE ? "男" : "女") << endl; // 输出性别
    cout << "数据1: " << test->data1.d << endl; // 输出数据1
    delete test; // 释放内存
    test = nullptr; // 避免悬空指针错误
}