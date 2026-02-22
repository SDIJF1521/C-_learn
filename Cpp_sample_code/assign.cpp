#include<iostream>
int main(void){
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    float tree = 3;
    int guess(3.9832);
    int duess = 1.2E12;
    std::cout << "tree = " << tree << std::endl;
    std::cout << "guess = " << guess << std::endl;
    std::cout << "duess = " << duess << std::endl;
}