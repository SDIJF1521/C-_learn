#include <iostream>
#include <vector>
#include<windows.h>


int main() {
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);
    vector<int> vec; // 创建一个整数类型的动态数组
    vec = {1, 2, 3, 4, 5}; // 初始化数组
    cout << "检测数组是否为空: " << (vec.empty() ? "是" : "否") << endl; // 输出数组大小
    vec.push_back(10); // 在数组末尾添加元素 10
    vec.push_back(20); // 在数组末尾添加元素 20
    vec.push_back(30); // 在数组末尾添加元素 30
    cout << "数组大小: " << vec.size() << endl; // 输出数组大小
    cout << "数组元素: ";
    for (int i : vec) {
        cout << i << " "; // 输出数组元素
    }
    cout << endl;
    vec.pop_back(); // 删除数组末尾的元素
    cout << "删除数组末尾的元素后数组大小: " << vec.size() << endl; // 输出数组大小
    cout << "删除数组末尾的元素后数组元素: ";
    for (int i : vec) {
        cout << i << " "; // 输出数组元素
    }
    cout << endl;
    vec.clear(); // 清空数组中的所有元素
    cout << "清空数组中的所有元素后数组大小: " << vec.size() << endl; // 输出数组大小
    
}