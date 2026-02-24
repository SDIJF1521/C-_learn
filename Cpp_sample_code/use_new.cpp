#include <iostream>
int main(){
    using namespace std;
    int nights = 1001;
    int *pt = new int();
    *pt = 1001; 
    cout << "nighrts value = " << nights << ": location " << &nights << endl;
    cout << "int value = " << *pt << ": location " << pt << endl;
    double *pd = new double;
    *pd = 1001.0;
    cout << "double value = " << *pd << ": location " << pd << endl;
    cout << "location of pointer pt = " << &pt << endl;
    cout << "size of pt = " << sizeof(pt) << endl;
    cout << "size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd << endl;
    cout << "size of *pd = " << sizeof(*pd) << endl;
    delete pt; // 释放指针变量 pt 指向的内存
    delete pd; // 释放指针变量 pd 指向的内存
}
