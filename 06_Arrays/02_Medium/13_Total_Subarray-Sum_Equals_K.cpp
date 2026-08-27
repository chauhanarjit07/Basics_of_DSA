#include<bits/stdc++.h>
using namespace std;

void maxsub(vector<int> &arr,int k){
    int tsum=0, cnt=0,prefix=0;
    map<int,int> hmap;
    hmap[0]=1;
    for(int i=0; i<arr.size(); i++){
        tsum+=arr[i];
        prefix= tsum-k;
        cnt+=hmap[prefix];
        hmap[tsum]+=1;

    }
    cout<<"Maximum Number of Subarrays: "<<cnt;
}


int main(){
    int n,i,k;
    cout<<"Enter N: ";
    cin>>n;
    vector<int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter K: ";
    cin>>k;
    maxsub(arr,k);
    
}