#include<iostream>
int main(){
    using namespace std;
    
    // 在二维数组中查找特定值
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int target = 7;
    bool found = false;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << "检查位置[" << i << "][" << j << "]: " << matrix[i][j] << endl;
            if(matrix[i][j] == target){
                cout << "找到目标值 " << target << " 在位置[" << i << "][" << j << "]" << endl;
                found = true;
                break;  // 只退出内层循环
            }
        }
        if(found){
            break;  // 退出外层循环
        }
    }
    
    if(!found){
        cout << "未找到目标值" << target << endl;
    }
    return 0;
}