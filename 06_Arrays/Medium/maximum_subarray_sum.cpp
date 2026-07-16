#include<bits/stdc++.h>
using namespace std;
void maxsum(vector<int> &arr, int n){
    int i,sum=0,maxsum=INT_MIN,start,end;
    for(i=0; i<n; i++){
        if(sum==0){
            start=i;
        }
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        else if(maxsum<sum){
            maxsum= sum;
            end=i;

        }
    }
    cout<<"Max Sum of Subarray is: "<<maxsum<<"index: "<<start<<" "<<end;
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