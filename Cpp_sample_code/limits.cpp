#include<iostream>
#include<limits>
int main(void){
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    std::cout << "int is " << sizeof(int)<<  " bits" << std::endl;
    std::cout << "short is " << sizeof n_short<< " bits" << std::endl;
    std::cout << "long is " << sizeof n_long << " bits" << std::endl;
    std::cout << "long long is " << sizeof n_llong << " bits" << std::endl;
    std::cout << std::endl;
    std::cout << "Maxium int values:"<< std::endl;
    std::cout << "int: " << n_int << std::endl;
    std::cout << "short: " << n_short << std::endl;
    std::cout << "long: " << n_long << std::endl;
    std::cout << "long long: " << n_llong << std::endl;

    std::cout << "Minium int values = "<< INT_MIN << std::endl;
    std::cout << "Bits per byte = " << CHAR_BIT << std::endl;

    return 0;
}