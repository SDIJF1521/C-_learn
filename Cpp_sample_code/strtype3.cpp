#include <iostream>
#include <string>
#include <cstring>
int main(){
    char charr1[20];
    char charr2[20] = "jqguar";
    std::string str1;
    std::string str2 = "panther";

    // 字符串赋值
    str1 = str2;
    strcpy(charr1,charr2);
    
    // 字符串拼接
    str1 += "paste";
    strcat(charr1,"juice");

    // 字符串长度
    int len1 = str1.length();
    int len2 = strlen(charr1);

    std::cout << "The string " << str1 << " contains "
              << len1 << " characters." << std::endl;
    std::cout << "The string " << charr1 << " contains "
              << len2 << " characters." << std::endl;
}