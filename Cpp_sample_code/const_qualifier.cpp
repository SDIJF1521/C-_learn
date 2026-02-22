
#include <iostream>
int main() {
    const int a = 10;
    std::cout << "a: " << a << std::endl;
    // a = 20; // 编译错误，不能修改常量的值
}