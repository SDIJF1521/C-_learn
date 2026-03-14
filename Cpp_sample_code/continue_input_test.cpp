#include<iostream>
#include<windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    int scores[5] = {85, -10, 92, 78, -5};
    int sum = 0;
    int count = 0;
    
    for(int i = 0; i < 5; i++){
        if(scores[i] < 0){
            cout << "第" << i+1 << "个成绩无效，跳过" << endl;
            continue;  // 跳过负数成绩
        }
        sum += scores[i];
        count++;
        cout << "有效成绩: " << scores[i] << endl;
    }
    
    if(count > 0){
        cout << "平均成绩: " << (double)sum/count << endl;
    }
    return 0;
}