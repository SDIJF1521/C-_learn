#include <iostream>
#include <array>
#include<windows.h>


int main() {
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);
    array<int, 5> arr; // 创建一个整数类型的固定大小数组
    arr.fill(1); // 将数组中的所有元素填充为1
    for (int i : arr) {
        cout << i << " "; // 输出数组元素
    }
    cout << "数组是否为空: " << (arr.empty()? "是" : "否") << endl; // 输出数组是否为空
    cout << "数组大小: " << arr.size() << endl; // 输出数组大小
    cout << "数组元素: ";
    for (int i : arr) {
        cout << i << " "; // 输出数组元素
    }
    cout << endl;
    cout << "数组第一个元素: " << arr.front() << endl; // 输出数组第一个元素
    cout << "数组最后一个元素: " << arr.back() << endl; // 输出数组最后一个元素
    cout << "数组第一个元素的地址: " << arr.data() << endl; // 输出数组第一个元素的地址
    cout << endl;
}