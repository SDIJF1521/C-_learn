#include<cmath>
#include<iostream>
int main(void)
{
    double area;
    std::cout << "Enter the floor area, in square feet, of you home:";
    std::cin >> area;
    double side;
    side = sqrt(area);
    std::cout << "That's the equivalent of a " << side;
    std::cout << " feet to the side." << std::endl;
    std::cout << "How fascinating!" << std::endl;
}