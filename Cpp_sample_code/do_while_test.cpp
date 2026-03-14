#include<iostream>
#include<string>
#include<windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    int n = 5;
    int out = 1;
    do{
        out=out*n;
    }while(n!=5);
    cout<<out<<endl;
}