#include<bits/stdc++.h>
using namespace std;
 int fib(int n){
    if(n==0 || n==1){ //base case;
        return n;
        }
    return fib(n-1)+fib(n-2);
    }
 //Time Complexity=O(2^n);
 //Space Complexity=O(n);
int main(){
int n;
cin>>n;
cout<<fib(n)<<endl;
return 0;
} 