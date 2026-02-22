#include<iostream>
int main(void){
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    int i = 10;
    float f = (float)i;
    std::cout << "f = " << f << std::endl;
}