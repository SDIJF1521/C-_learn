#include<iostream>
int main(void){
    //int a{3.5}; // 错误：窄化转换
    float b{2.7f}; // 正确
    double c{1.2e3}; // 正确
    // std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
}