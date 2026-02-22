#include <iostream>

enum test {
    a = 1,
    b = 2,
    c = 6,
    d = 8
};

int main(){
    test t1;
    t1 = test(7);
    std::cout << t1 << std::endl;
}