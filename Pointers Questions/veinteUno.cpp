#include<bits/stdc++.h>
using namespace std;

void fun(int a[]){
    cout<<a[0]<<" "; 
}

int main()
{
    int a[] = {1,2,3,4};
    fun(a+1);
    // it is position in array which is 2 
    cout<<a[0]<<endl;
    return 0;
}