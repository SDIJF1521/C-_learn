#include <iostream>
#include <cwchar>
#include <io.h>
#include <fcntl.h>
int main(){
    _setmode(_fileno(stdout), _O_U8TEXT);    //设置输出为宽字符模式输出字符编码为UTF-8
    wchar_t wcharr1[20];
    wchar_t wcharr2[20] = L"你好";
    // 宽字符字符串赋值
    wcsncpy(wcharr1,wcharr2,5);
    // 宽字符字符串拼接
    wcsncat(wcharr1,L"世界",6);
    std::wcout << wcharr1 << std::endl;
    // 宽字符字符串长度
    int len = wcslen(wcharr1);
    std::wcout << L"wcharr1 的长度为: " << len << std::endl;
}