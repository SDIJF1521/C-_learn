#include <iostream>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);

    std::wcout << L"请输入一个中文:_\b";
    wchar_t ch;
    std::wcin >> ch;
    std::wcout << L"输入内容为: " << ch << std::endl;
}