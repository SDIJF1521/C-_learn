#include<iostream>
using namespace std;
void simon(int n); //声明函数
int main(void){
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);   // call it again
    cout << "Done!" << endl;
    return 0;
}
void simon(int n){   //定义函数原型
    cout << "Simon says touch your toes " << n << " times." << endl;
}