#include <iostream>

int main() {
    using namespace std;
    int i = 0;
    int arr[] = {1,2,3,4};
    for (i; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << endl;
    }
}