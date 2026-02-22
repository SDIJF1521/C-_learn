#include <iostream>
int main(){
    using namespace std;
    int updates = 6;
    int *p;
    p = &updates;
    cout << "updates value = " << updates;
    cout << " and updates address = " << &updates << endl;
    cout << " p value = " << p;
    cout << " and p address = " << &p << endl;
    cout << " *p value = " << *p << endl;
    *p = *p+1;
    cout << " *p value = " << *p << endl;
    cout << " updates value = " << updates << endl;
}