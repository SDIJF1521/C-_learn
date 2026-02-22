#include <iostream>
#include <string>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    std::string s1 = "penguin";
    std::string s2,s3;
    std::cout << "将s1赋值给s2操作:" << std::endl;
    s2 = s1;
    std::cout << "s1 " << s1 << ", s2:" << s2 << std::endl;

    std::cout << "将s1和s2拼接起来赋值给s3操作:" << std::endl;
    s3 = s1 + s2;
    std::cout << "s3:" << s3 << std::endl;
    std::cout << "在s1后面附加s2操作:" << std::endl;
    s1 += s2;
    std::cout << "s1:" << s1 << std::endl;
    std::cout << "在s2后面附加字符串操作:" << std::endl;
    s2 += " and ";
    std::cout << "s2:" << s2 << std::endl;
    return 0;
}