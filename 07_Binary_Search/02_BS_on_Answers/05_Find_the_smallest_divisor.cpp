#include<bits/stdc++.h>
using namespace std;

long long sum(vector<int> &a, int x){
    int n=a.size();
    long long sum=0;
    for(int i=0; i<n; i++){
        sum+= ceil((double)a[i]/(double)x);
    }
    return sum;
}


int smallestDivisor(vector<int>& nums, int threshold) {
    int maxi= *max_element(nums.begin(),nums.end());
    int low=1,high=maxi,n=nums.size();
    if(n> threshold) return -1;
    while(low<=high){
        int mid= (low+high)/2;
        if(sum(nums,mid)<=threshold){
            high= mid-1;
        }
        else low=mid+1;
    }
    return low;
}

int main(){
    int n,m,k;
    cout<<"Enter N: ";
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cout<<"Enter M: ";
    cin>>m;
    
    cout<<"Ans: "<< smallestDivisor(nums,m);
}