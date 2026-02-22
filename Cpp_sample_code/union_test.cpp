#include <iostream>
#include <string>
#include <windows.h>

union test{
    int member1;
    float member2;
};

int main(){
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);

    test t;
    t.member1 = 100;
    cout << t.member1 << endl;
    t.member2 = 3.14;
    cout << t.member2 << endl;
}