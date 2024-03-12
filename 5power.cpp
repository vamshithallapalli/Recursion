#include<bits/stdc++.h>
using namespace std;
//TC-O(n) SC-O(n);
int power(int n, int p){
    if(p==0){
        return 1;
    }
    int prevpower = power (n, p-1);
    return n*prevpower;
}

//TC-O(logN) SC-O(logN);
int power(int n, int p){
  if(p==0) return 1;
  int temp = power(n,p/2);
  if(p%2 == 1)  return temp*temp*n;
  return temp*temp;  

}
 
int main(){
int n,p;
cin>>n>>p;
cout<<power(n,p)<<endl;
return 0;
}

