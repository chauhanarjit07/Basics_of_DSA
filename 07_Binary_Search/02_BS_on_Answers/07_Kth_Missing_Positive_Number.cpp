#include<bits/stdc++.h>
using namespace std;


int ship(vector<int> &nums, int k){
    int low=0, n= nums.size(),high= n-1;
    while(low<= high){
        int mid= (low+high)/2;
        int missing= nums[mid]-(mid+1);
        if(missing<k) low= mid+1;
        else high= mid-1;
    }
    return k+1+high;
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
    
    cout<<"Ans: "<< ship(nums,m);
}