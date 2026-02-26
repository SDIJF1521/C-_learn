#include <iostream>
#include <windows.h>

int main(){
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);
    int arr[5] = {1,2,3,4,5};
    int *p = &arr[0];
    cout << "指针 p 的值: " << p << endl; // 输出指针 p 的值，即数组首地址
    cout << "指针 p 指向的值: " << *p << endl;
    p++; // 将指针 p 移动到下一个元素
    cout << "指针 p 的值: " << p << endl; // 输出指针 p 的值，即数组第二个元素的地址
    cout << "指针 p 指向的值: " << *p << endl;
    p++; // 将指针 p 移动到下一个元素
    cout << "指针 p 的值: " << p << endl; // 输出指
    cout << "指针 p 指向的值: " << *p << endl;
    p++; // 将指针 p 移动到下一个元素
    cout << "指针 p 的值: " << p << endl; // 输出指针 p 的值，即数组第三个元素的地址
    cout << "指针 p 指向的值: " << *p << endl;
    p++; // 将指针 p 移动到下一个元素
    cout << "指针 p 的值: " << p << endl; // 输出指针 p 的值，即数组第四个元素的地址
    cout << "指针 p 指向的值: " << *p << endl;
}