#include<iostream>
int main(){
    std::cout << "What year was your house built?" << std::endl;
    int year;
    std::cin >> year;
    std::cout << "What is its street address?" << std::endl;
    char address[80];
    std::cin.getline(address, 80);
    std::cout << "Year built: " << year << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Done." << std::endl;
}