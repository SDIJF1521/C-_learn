#include<iostream>
#include<string>
int main(){
    using namespace std;
    string password;
    cout<<"请输入密码:";
    cin>>password;
    while(password!="123456"){
    cout<<"密码错误,请重新输入:";
    cin>>password;
    }
    cout<<"密码正确,登录成功!"<<endl;
    return 0;
}