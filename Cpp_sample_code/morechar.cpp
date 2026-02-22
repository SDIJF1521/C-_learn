#include<iostream>
int main(void){
    char ch;
    int i = ch;
    std::cout << "Enter a character: " << std::endl;
    std::cin >> ch;
    std::cout << "The ASCII code for " << ch << " is " << i << std::endl;
    std::cout << "Add one to the character code:" << std::endl;
    ch = ch + 1;             // change character code in ch
    i = ch;                  // save new character code in i
    std::cout << "The ASCII code for " << ch << " is " << i << std::endl;

    // using the cout.put() member function to display a char
    std::cout << "Displaying char ch using cout.put(ch): ";
    std::cout.put(ch);

    // using cout.put() to display a char constant
    std::cout.put('!');

   std:: cout << std::endl << "Done" << std::endl;
    return 0;
}