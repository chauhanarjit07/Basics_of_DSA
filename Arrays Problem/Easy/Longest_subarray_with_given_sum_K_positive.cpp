#include<bits/stdc++.h>
using namespace std;

void la(vector <int> &arr, int n,long long k){
    int left=0,right=0,sum=arr[0],maxlen=0;
    while(right<n){
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxlen= max(maxlen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=arr[right];
        }
    }
    cout<<maxlen;
}



    
int main(){
    int n,i;
    long long k;
    cout<<"Enter N: ";
    cin>>n;
    vector <int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter K: ";
    cin>>k;
    la(arr, n,k);
}