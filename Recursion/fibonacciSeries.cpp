#include<iostream>
using namespace std;

int fib(int n){
    if(n<=0){
        return -1;
    }
    // base case
    if(n==1){
        return 0;  // first Term
    }
    if(n==2){
        return 1;  // Second Term
    }

    // Recursive Relation
    // f(n) = f(n-1) + f(n-2)

    int ans = fib(n-1) + fib(n-2);

    return ans;
}

int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;

    cout<<fib(n)<<endl;

    return 0;
}