#include<iostream>
#include<cstring>
int main(){
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";
    std::cout << "Howdy! I'm " << name2;
    std::cout << "! What's your name? " << std::endl;
    std::cin >> name1;
    std::cout << "Well, " << name1 << ", your name has " ;
    std::cout << strlen(name1) << " letters and is stored\n";
    std::cout << "in an array of " << sizeof(name1) << " bytes.\n";
    std::cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    std::cout << "Here are the first 3 letters of my name: ";
    std::cout << name2 << std::endl;
}