#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main(){
    inflatable bouquet = {
    "sunflowers",
    0.20,
    12.49,
    };

    std::cout << "bouquet: " << bouquet.name << " for $" << bouquet.price << std::endl;
    inflatable choice;
    choice = bouquet; // 成员赋值
    std::cout << "choice: " << choice.name << " for $" << choice.price << std::endl;
    return 0;
}