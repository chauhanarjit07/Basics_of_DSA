#include<bits/stdc++.h>
using namespace std;
void majority(vector<int> &arr, int n){
    int i, count=0,el;
    for(i=0; i<n; i++){
        if(count==0){
            count=1;
            el=arr[i];
        }
        else if(el==arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    int count1=0;
    for(i=0; i<n; i++){
        if(el==arr[i]){
            count1++;
        }
    }
    if(count1> n/2){
        cout<<el;
    }
    
}
int main(){
    int n,i,t;
    cout<<"Enter N: ";
    cin>>n;
    vector<int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    majority(arr,n);
}