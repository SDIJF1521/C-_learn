#include <iostream>
#include <windows.h>
    
int main(){
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);
    int arr[5] = {1,2,3,4,5};
    cout << "数组首地址: " << arr << endl; // 输出数组首地址
    cout << "数组第一个元素地址: " << &arr[0] << endl; // 输出数组第一个元素地址
    cout << "数组第二个元素地址: " << &arr[1] << endl;
    cout << "数组第三个元素地址: " << &arr[2] << endl;
    cout << "数组第四个元素地址: " << &arr[3] << endl;
    cout << "数组第五个元素地址: " << &arr[4] << endl;
    cout << "类型大小: " << sizeof(int) << " 字节" << endl; // 输出 int 类型的字节数
}