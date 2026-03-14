#include<iostream>
int main(){
    using namespace std;
    int n = 0;
    int sum = 0;
    
    while(n < 10){
        n++;
        if(n % 2 == 0){
            continue;  // 跳过偶数
        }
        sum += n;
        cout << "当前奇数: " << n << ", 累计和: " << sum << endl;
    }
    return 0;
}