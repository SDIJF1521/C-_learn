#include <iostream>
#include <cstring> // 包含 strlen 函数的头文件

int main(){
    using namespace std;
    char *str = "Hello"; // 定义一个指向字符串字面值的指针
    cout << "字符串内容: " << str << endl; // 输出字符串内容
    cout << "字符串首地址: " << static_cast<const void*>(str) << endl; // 输出字符串首地址
    cout << "字符串长度: " << strlen(str) << endl; // 输出字符串长度
    cout << "字符串第一个字符: " << *str << endl; // 输出字符串的第一个字符
    cout << "字符串第二个字符: " << *(str+1) << endl; // 输出字符串的第二个字符
    cout << "字符串第三个字符: " << *(str+2) << endl;
    cout << "字符串第四个字符: " << *(str+3) << endl; // 输出字符串的第四个字符
    cout << "字符串第五个字符: " << *(str+4) << endl; // 输出字符串的第五个字符
    
}