#include<iostream>
int main(void){
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    float tub = 10.0/3.0;
    double mint = 10.0/3.0;
    const float millon = 1.0e6;
    std::cout << "tub = " << tub;
    std::cout << ", a million tubs = " << millon * tub << std::endl;
    std::cout << "and ten million mints = " << 10.0 * millon * mint << std::endl;
    std::cout << 10*millon*tub << std::endl;

    std::cout << "mint = " << mint <<" and a million mints = ";
    std::cout << millon*mint <<std::endl;
}