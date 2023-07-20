#include<iostream>
using namespace std;

void printArray(int arr[], int n, int i){
    // base case
    if(i>=n){
        return;
    }
    // Ek case solve kardo baaki recursion dekh lega
    cout<<arr[i]<<" ";

    printArray(arr,n,i+1);
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i=0;
    printArray(arr,n,i);
    return 0;
}