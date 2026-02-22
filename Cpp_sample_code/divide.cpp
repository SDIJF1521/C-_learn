#include<iostream>
int main(void){
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    std::cout << "Integer division: 9/5 =" << 9 / 5 << std::endl;
    std::cout << "Float division: 9.0/5.0 = " << 9.0 / 5.0 << std::endl;
    std::cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << std::endl;
    std::cout << "Double constanst: 1e7/9.0 = " << 1e7 / 9.0 << std::endl;
    std::cout << "float constant: 1e7f/9.0f = " << 1e7f / 9.0f << std::endl;
}