#include <iostream>
#include <windows.h>
int main(){
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);
    int arr[5] = {1,2,3};
    int *p = &arr[0];
    int p_int = reinterpret_cast<uintptr_t>(p); // 将指针 p 转换为 uintptr_t 类型的整数
    cout << "指针 p 的值: " << p << endl; // 输出指
    cout << "指针 p 指向的值: " << *p << endl;
    p_int+= sizeof(int); // 将整数 p_int 增加 2 个 int 类型的字节数
    p = reinterpret_cast<int*>(p_int); // 将整数 p_int 转换回指针类型
    cout << "偏移后指针 p 的值: " << p << endl; // 输出偏移后的指针值
    cout << "偏移后指针 p 指向的值: " << *p << endl;
    p_int+= sizeof(int); // 将整数 p_int 增加 2 个 int 类型的字节数
    p = reinterpret_cast<int*>(p_int); // 将整数 p_int 转换回指
    cout << "偏移后指针 p 的值: " << p << endl; // 输出偏移后的指针值
    cout << "偏移后指针 p 指向的值: " << *p;
}