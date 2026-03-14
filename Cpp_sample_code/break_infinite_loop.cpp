#include<iostream>
#include<windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    int n = 0;
    int sum = 0;
    
    while(true){  // 无限循环
        cout << "请输入一个数字(输入0结束):";
        cin >> n;
        
        if(n == 0){
            break;  // 用户输入0，退出循环
        }
        
        if(n < 0){
            cout << "请输入正数!" << endl;
            continue;  // 负数重新输入
        }
        
        sum += n;
        cout << "当前和为:" << sum << endl;
    }
    
    cout << "最终和为:" << sum << endl;
    return 0;
}