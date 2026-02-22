#include<iostream>
void printInt(int n) {
    std::cout << "Integer: " << n << std::endl;
}
void printDouble(double d) {
    std::cout << "Double: " << d << std::endl;
}
int main(void){
    int i = 10;
    double d = 3.14;
    float f = 2.71f;
    printInt(i); // 正确
    printDouble(d); // 正确
    printDouble(f); // f 转换为 double 类型
    
}