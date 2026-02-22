#include<iostream>
int stonetolb(int n); //定义函数头
int main(void){
    int stone;
    std::cout << "Enter the weight in stone: ";
    std::cin >> stone;
    int pounds = stonetolb(stone);
    std::cout << stone <<" stone= ";
    std::cout << pounds << " pounds.";
    
}

int stonetolb(int n){
    return n*14;
}