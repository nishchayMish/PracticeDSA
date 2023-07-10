#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a=10.54;
    double* ptr = &a;
    ptr = ptr+1;
    cout<<ptr<<endl;
    return 0;
}