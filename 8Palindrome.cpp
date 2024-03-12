#include<bits/stdc++.h>
using namespace std;
bool check(int l,int r,string &s){
    if(l>=r) return true;
    if(s[l]!=s[r]) return false;
    return check(l+1,r-1,s);
}
int main(){
string s;
cin>>s;
if(check(0, s.size()-1, s)==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}