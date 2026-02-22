#include <iostream>
#include<io.h>
#include<fcntl.h>
int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    char16_t ch16 = u'中';
    char32_t ch32 = U'中';
    char16_t ch16_2 = L'中';
    char32_t ch32_2 = L'中';
    wprintf(L"char16_t 类型的字符: %lc\n", ch16_2);
    wprintf(L"char32_t 类型的字符: %lc\n", ch32_2);

    wprintf(L"char16_t 类型的字符: %lc\n", (wchar_t)ch16);
    wprintf(L"char32_t 类型的字符: %lc\n", (wchar_t)ch32);

}