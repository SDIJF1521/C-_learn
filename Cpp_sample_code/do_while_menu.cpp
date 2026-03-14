#include<iostream>
#include<windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    int choice;
    do{
        cout << "===== 菜单 =====" << endl;
        cout << "1. 选项一" << endl;
        cout << "2. 选项二" << endl;
        cout << "3. 退出" << endl;
        cout << "请选择:";
        cin >> choice;
        
        switch(choice){
            case 1:
                cout << "你选择了选项一" << endl;
                break;
            case 2:
                cout << "你选择了选项二" << endl;
                break;
            case 3:
                cout << "退出程序" << endl;
                break;
            default:
                cout << "无效选择，请重新输入" << endl;
        }
    }while(choice != 3);
    
    return 0;
}