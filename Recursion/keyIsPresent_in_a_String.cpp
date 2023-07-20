#include<bits/stdc++.h>
using namespace std;

void Print(string str , int& n , int i, char& key){
    // base case
    if(i>=n){
        return;
    }
    if(str[i]==key){
        cout<<"found at : "<<i<<endl;
    }
    // rest recursion will see
    Print(str,n,i+1,key); 
}

bool isPresent(string str , int& n , int i, char& key){
    // base case
    if(i>=n){
        return false; //key not find
    }
    if(str[i]==key){
        return true;
    }
    // rest recursion will see
    bool ans = isPresent(str,n,i+1,key);
    return ans;
}

int CheckKey(string str , int& n , int i, char& key){
    // base case
    if(i>=n){
        return -1;
    }
    if(str[i]==key){
        return i;
    }
    // rest recursion will see
    return CheckKey(str,n,i+1,key);
}

int main()
{
    string str = "lovebabbar";
    char key = 'b';
    int n = str.length();
    int i=0;
    bool check=isPresent(str,n,i,key);

    if(check==0){                           // First Function called.
        cout<<"not present";
    }
    else{
        cout<<"present";
    }
    cout<<endl;
    cout<<CheckKey(str,n,i,key)<<endl;      // Second Function called.

    Print(str,n,i,key);                     // Third Function called.
    return 0;
}