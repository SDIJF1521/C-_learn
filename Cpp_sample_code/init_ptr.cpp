#include <iostream>
#include<string>
#include <windows.h>

int main(){
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);
    string str = "hello world"; // 字符串初始化
    string *p = &str;   // 字符串指针初始化
    int *p1 = NULL;   // 整型指针初始化
    // int *p2 = reinterpret_cast<int*>(0x5ffe7c);   // 整型指针初始化
    // *p2 = 123;  // 整型指针指向的地址赋值为123

    
    cout << "变量str的地址为：" << &str << endl;
    cout << "字符串str的值为：" << str << endl;
    cout << "指针p指向的地址为：" << p << endl;
    cout << "指针p指向的地址中的值为：" << *p << endl;
    cout << "指针p1指向的地址为：" << p1 << endl;
    // cout << "指针p2指向的地址为：" << p2 << endl;
    // cout << "指针p2指向的地址中的值为：" << *p2 << endl;

}