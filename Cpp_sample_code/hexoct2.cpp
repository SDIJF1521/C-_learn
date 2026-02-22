#include<iostream>
int main(void){
    int chest =42;
    int waist = 42;
    int inseam = 42;
    std::cout << "Monsieur cuts a striking figure!" << std::endl;
    std::cout << "chest = " << chest << " (decimal for 42)" << std::endl;
    std::cout << std::hex;
    std::cout << "waist = " << waist << " (hexadecimal for 42)" << std::endl;
    std::cout << std::oct;
    std::cout << "inseam = " << inseam << " (octal for 42)" << std::endl;

}