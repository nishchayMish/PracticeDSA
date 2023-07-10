#include<bits/stdc++.h>
using namespace std;

int main()
{
    int* ptr = 0;
    int a=10;
    *ptr = a;
    cout<<*ptr<<endl;
    return 0;
}

// address of null pointer (nullptr) is  : 0*000000 something and we are derefrencing it .
// by putting astrik.
// so it will give error : Segmentation Fault. 