#include<iostream>
int main(){
    using namespace std;
    for(int i=0;i<10;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}