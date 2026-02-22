#include <iostream>

enum test {
    a,
    b = 200,
    c = 300,
    d
};

int main(){
    test cs[] = {a, b, c, d};
    std::cout << cs[0] << std::endl;
    std::cout << cs[1] << std::endl;
    std::cout << cs[2] << std::endl;
    std::cout << cs[3] << std::endl;
}