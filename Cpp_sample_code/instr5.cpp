#include<iostream>
int main(){
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    std::cout << "Enter your name: " << std::endl;
    std::cin.get(name, ArSize).get();
    std::cout << "Enter your favorite dessert:\n";
    std::cin.get(dessert, ArSize).get();
    std::cout << "I have some delicious " << dessert;
    std::cout << " for you, " << name << "!\n";
}