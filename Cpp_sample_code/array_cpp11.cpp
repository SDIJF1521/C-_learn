#include<iostream>
int main(void){
    int a1[5] {1, 2, 3, 4, 5}; // 使用大括号初始化数组
    int a2[5] {}; // 所有元素初始化为0
    std::cout << "Array a1: ";
    for(int i = 0; i < 5; ++i){
        std::cout << a1[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Array a2: ";
    for(int i = 0; i < 5; ++i){
        std::cout << a2[i] << " ";
    }
    std::cout << std::endl;
}