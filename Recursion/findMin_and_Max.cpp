#include<bits/stdc++.h>
using namespace std;

// in Findmax  function we have put a (refrence_variable) = Same memory different names. 
// b'coz in every Recursive step there will be a new value of maxi
// and after the function is finished its local variable will die 
// and the value of INT_MIN will be printed in the main function . 
void Findmax(int arr[], int n,int i, int& maxi){
    // base case
    if(i>=n){
        return;
    }
    // Processing
    // Solve 1 case current element ko check karna baaki recursion dekh lega.
    if(arr[i]>maxi){
        maxi = arr[i];
    }
    // Recursive approach
    Findmax(arr,n,i+1,maxi);
}

void Findmin(int arr[], int n,int i, int& mini){
    // base case
    if(i>=n){
        return;
    }
    // Processing
    // Solve 1 case current element ko check karna baaki recursion dekh lega.
    if(arr[i]<mini){
        mini = arr[i];
    }
    // Recursive approach
    Findmin(arr,n,i+1,mini);
}

int main()
{
    int arr[] = {10,30,44,40,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i=0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    Findmax(arr,n,i,maxi);
    Findmin(arr,n,i,mini);
    cout<<mini<<endl;
    cout<<maxi<<endl;
    return 0;
}