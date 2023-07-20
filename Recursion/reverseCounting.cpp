#include<iostream>
using namespace std;

void PrintReverseCounting(int n){
    // base case
    if(n==0){ 
        return;
    }
    
    // processing
    cout<<n<<endl;
    
    PrintReverseCounting(n-1);
}

int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    PrintReverseCounting(n);
    return 0;
}