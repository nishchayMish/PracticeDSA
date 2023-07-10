#include<bits/stdc++.h>
using namespace std;

void square(int* p){
    int a = 10;
    // in this p will point to his local a
    p=&a;
    *p = (*p) * (*p);
}

int main()
{
    int a=10;
    square(&a);
    cout<<a<<endl;
    return 0;
}