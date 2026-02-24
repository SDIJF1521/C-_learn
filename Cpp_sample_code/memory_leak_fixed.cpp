#include <iostream>
int main(){
    int *p = new int(10); // 分配内存并初始化为 10
    std::cout << "Value: " << *p << std::endl; // 输出：Value: 10
    delete p; // 释放内存
    p = nullptr; // 将指针变量设置为 nullptr，避免悬空指针错误
    return 0;
}