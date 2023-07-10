#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={10,20,30,40};
    //a is an const pointer in symbol table so it cannot be changed.
    int* p = a++;
    cout<<*p<<endl;
    return 0;
}