#include<iostream>
int main(void){
    char name1[20];
    char name2[] = "C++owboy";
    std::cout << "Howdy! I'm " << name2;
    std::cout << "! What's your name?\n";
    std::cin >> name1;
    std::cout << "Well, " << name1 << ", your name has ";
    std::cout << sizeof name1 << " bytes.\n";
    std::cout << "Your name in reverse is " << name1 << std::endl;
}