#include<iostream>
int main(){
    using namespace std;
    int n=0;
    while(n<10){
        n++;
        if(n%2==0){
            continue;
        }
        cout<<n<<endl;
    }
}