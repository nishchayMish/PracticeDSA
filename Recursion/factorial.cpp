#include<iostream>
using namespace std;

int factorial(int n){
    // base case => when to stop
    if(n==1)
    return 1;

    // recursive relation => f(n) = f(n) * f(n-1) !
    int chotiProblem = factorial(n-1);
    int BadiProblem = n * chotiProblem;

    return BadiProblem;
}

int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    cout<<factorial(n);
    return 0;
}