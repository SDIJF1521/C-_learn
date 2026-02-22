#include<iostream>
int main(void){
    char ch = '\U00000041';
    std::cout << "hello \u2022 world" << std::endl;
    std::cout << "The character " << ch << " has the code " << (int)ch << std::endl;
}