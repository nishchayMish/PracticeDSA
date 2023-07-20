#include<iostream>
using namespace std;
void PrintDigits(int n){

    // base case
    if(n==0){
        return;
    }

    // ek case handle kar liya
    int rem = n % 10;

    PrintDigits(n/10);

    cout<<rem<<endl;

    // baki recursion dekhLega
    //int newValueOfN = n/10;
}    
int main()
{
    int n=0647;
    PrintDigits(n);
    return 0;
}