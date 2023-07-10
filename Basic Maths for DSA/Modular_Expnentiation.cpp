// Problem : Modular Exponentiation
// Coding-Ninjas : https://www.codingninjas.com/studio/problems/modular-exponentiation_1082146
#include<bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	long long int power = pow(x,n);
    long long int ans = power % m;
    return ans;
}

int main()
{
    int x,n,m;
    cout<<"Enter a number and its power = ";
    cin>>x>>n;
    cout<<"Enter the modulas number = ";
    cin>>m;
    cout<<endl;
    cout<<"ans is : "<<modularExponentiation(x,n,m)<<endl;
    return 0;
}