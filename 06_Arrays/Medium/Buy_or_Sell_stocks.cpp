#include<bits/stdc++.h>
using namespace std;
void maxprofit(vector<int> &arr, int n){
    int i,mn=arr[0],profit=0,cost=0;
    for(i=1; i<n; i++){
        cost= arr[i]-mn;
        profit=max(profit,cost);
        mn= min(mn,arr[i]);
    }
    cout<<"Max Profit Is: "<<profit;
    
}
int main(){
    int n,i,t;
    cout<<"Enter N: ";
    cin>>n;
    vector<int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    maxprofit(arr,n);
    
}