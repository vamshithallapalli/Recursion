#include<bits/stdc++.h>
using namespace std;
void reverse(int l,int r,int arr[]){
    //BASE CASE
    if(l>=r)return;
    swap(arr[l], arr[r]);
    reverse (l+1, r-1, arr);
}
void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
int arr[]={1,2,3,4,5};
cout<<"Before"<<endl;
printarray(arr,5); //printing original array
reverse(0,4,arr);
cout<<"After"<<endl;
printarray(arr,5);
return 0;
}