#include<iostream>
int main(void){
    float hast,hasts;
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    std::cout << "Enter a number:" << std::endl;
    std::cin >> hast;
    std::cout << "Enter another number:" << std::endl;
    std::cin >> hasts;
    std::cout << "hats = " <<hast <<"; heads = " << hasts << std::endl;
    std::cout << "hast + hasts = " << hast + hasts << std::endl;
    std::cout << "hast - hasts = " << hast - hasts << std::endl;
    std::cout << "hast * hasts = " << hast * hasts << std::endl;
    std::cout << "hast / hasts = " << hast / hasts << std::endl;
    std::cout << "hast % hasts = " << int(hast) % int(hasts) << std::endl;
}