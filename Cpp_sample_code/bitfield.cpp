#include <iostream>
#include <string>
#include <windows.h>

struct test {
    int SN : 2;
    int age : 7;
    int sex : 3;
};

int main(){
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);
    test t = {0, 18, 1};
    std::cout << "SN: " << t.SN << std::endl;
    std::cout << "age: " << t.age << std::endl;
    std::cout << "sex: " << t.sex << std::endl;
}