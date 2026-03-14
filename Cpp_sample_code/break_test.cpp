#include<iostream>
int main(){
    using namespace std;
    for(int i=0;i<10;i++){
        if(i==5){
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}