#include<iostream>
int main(void)
{
    int carrots;
    std::cout << "How many carrots do you have?" << std::endl;
    std::cin >> carrots;
    carrots = carrots + 2;
    std::cout << "Now I have " << carrots << " carrots." << std::endl;
}