#include<iostream>
#include<vector>
int main(void){
    std::vector<int> v = {1, 2, 3, 4, 5};
    for(auto i : v){
        std::cout << i << std::endl;
    }
}