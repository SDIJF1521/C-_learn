#include<iostream>
int main(){
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    std::cout << "Enter your name: " << std::endl;
    std::cin.getline(name, ArSize);
    std::cout << "Enter your favorite dessert:\n";
    std::cin.getline(dessert, ArSize);
    std::cout << "I have some delicious " << dessert;
    std::cout << " for you, " << name << "!\n";
}