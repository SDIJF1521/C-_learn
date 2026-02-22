      // strtype5.cpp
      #include <iostream>
      #include <string>
      #include <cstring>
      int main(){
          char charr1[20];
          char charr2[20] = "jqguar";
          std::string str1;
          std::string str2 = "panther";

          // 字符串赋值
          strncpy(charr1,charr2,5);
          charr1[5] = '\0';
          std::cout << "charr1: " << charr1 << std::endl;

          // 字符串拼接
          strncat(charr1,"paste",6);
          std::cout << "charr1: " << charr1 << std::endl;
      }