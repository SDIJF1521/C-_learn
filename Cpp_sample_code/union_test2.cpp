#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <windows.h>

struct Test2 {
    std::string name;
    union {
        int member1;
        float member2;
    };
};
int main(){
    SetConsoleOutputCP(CP_UTF8);
    // _setmode(_fileno(stdout), _O_U16TEXT);
    Test2 t2;
    t2.name = "hello";
    // wcscpy(t2.member3, L"world");
    t2.member2 = 3.14f;
    std::cout << "name: " << t2.name << std::endl;
    std::cout << "member2: " << t2.member2 << std::endl;
}