#include<iostream>
void simon(int n); //声明函数
int main(void){
    simon(3);       // call the simon() function
    std::cout << "Pick an integer: ";
    int count;
    std::cin >> count;
    simon(count);   // call it again
    std::cout << "Done!" << std::endl;
    return 0;

}
void simon(int n){  //定义函数原型
    std::cout << "Simon says touch your toes " << n << " times." << std::endl;
}