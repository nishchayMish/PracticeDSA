#include <bits/stdc++.h>
using namespace std;

int chekKey(string str , int n , int i , int key , int& count){
  // base case
  if(i>=n){
    return -1;
  }
  if(str[i]==key){
    count++;
  }
  chekKey(str,n,i+1,key,count);
  return count;
}

int main() {
  string str = "babbar";
  int n = str.length();
  char key  = 'b';
  int i=0,count=0;
  chekKey(str,n,i,key,count);
  cout<<count;
  return 0;
}