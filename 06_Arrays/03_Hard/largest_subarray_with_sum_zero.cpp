#include<bits/stdc++.h>
using namespace std;

void sum_zero(vector<int> &nums ){
    int maax=0,sum=0,n=nums.size();
    map<int,int> mpp;
    for(int i=0; i<n; i++){
        sum+=nums[i];
        if(sum==0){
            maax=i+1;
        }
        else if(mpp.find(sum)==mpp.end()){
            mpp[nums[i]]=i;
        }
        else if(mpp.find(sum)!= mpp.end()){
            int diff= i-mpp[sum];
            maax= max(maax,diff);
        }
    }
    cout<<"The Largest Subarray with Sum '0'is: "<<maax<<endl;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sum_zero(arr);
}