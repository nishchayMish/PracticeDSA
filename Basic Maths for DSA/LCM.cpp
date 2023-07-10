#include <bits/stdc++.h>
using namespace std;

int GetGCD(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int GetLCM(int a,int b){
    int lcm = (a*b)/GetGCD(a,b);
    return lcm;
}

int main() {
    int a=72,b=24;
    cout<<GetLCM(a,b)<<endl;

    return 0;
}