#include<bits/stdc++.h>
using namespace std;

void maxxor(vector<int> &nums,int k){
    int xr=0,cnt=0,n=nums.size(),i;
    map<int,int> mpp;
    mpp[xr]++;

    for(i=0; i<n; i++){
        xr=xr^nums[i];
        int x=xr^k;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    cout<<cnt<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    maxxor(arr,6);
}