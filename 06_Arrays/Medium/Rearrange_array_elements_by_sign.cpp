#include<bits/stdc++.h>
using namespace std;
void maxsum(vector<int> &arr, int n){
    int pos=0, neg=1;
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            ans[pos]= arr[i];
            pos= pos+2;
        }
        else if(arr[i]<0){
            ans[neg]=arr[i];
            neg=neg+2;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
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
    maxsum(arr,n);
    
}