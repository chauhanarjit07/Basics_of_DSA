#include<bits/stdc++.h>
using namespace std;

long long days(vector<int> &a, int cap){
    long long days=1,load=0;
    int n= a.size();
    for(int i=0; i<n; i++){
        if(load+ a[i]>cap){
            days+=1;
            load=a[i];
        }
        else{
            load+=a[i];
        }
    }
    return days;
}

int ship(vector<int> &nums, int target){
    int low= 1,high= accumulate(nums.begin(),nums.end(),0);
    while(low<=high){
        int mid= (low+high)/2;
        if(days(nums,mid)<=target){
            high= mid-1;
        }
        else low= mid+1;
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
    
    cout<<"Ans: "<< ship(nums,m);
}