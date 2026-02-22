#include<iostream>
int main(void){
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    int auks, bats, coots;
    auks = 19.99+11.99;
    bats = (int) 19.99 + (int) 11.99;
    coots = int(19.99) + (int)11.99;
    std::cout << "auks = " << auks << std::endl;
    std::cout << "bats = " << bats << std::endl;
    std::cout << "coots = " << coots << std::endl;
    char ch = 'Z';
    std::cout << "The code for " << ch << " is ";
    std::cout << int(ch) << std::endl;
    std::cout << "Yes the code is ";
    std::cout << static_cast<int>(ch) << std::endl;
}