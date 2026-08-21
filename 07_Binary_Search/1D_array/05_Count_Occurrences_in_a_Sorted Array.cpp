#include<bits/stdc++.h>
using namespace std;

//---------without Lower and Upper bound------------
int first(vector<int> &nums, int target){
    int n= nums.size();
    int low=0, high= n-1;
    int firstt=-1;
    while(low<=high){
        int mid= (low+ high)/2;
        if(nums[mid]== target){
            firstt= mid;
            high= mid-1;
        }
        else if(nums[mid]<n){
            low= mid+1;
        }
        else high= mid-1;
    }
    return firstt;
}

int last(vector<int> &nums, int target){
    int n= nums.size();
    int low=0, high= n-1;
    int lastt=-1;
    while(low<=high){
        int mid= (low+ high)/2;
        if(nums[mid]== target){
            lastt= mid;
            low= mid+1;;
        }
        else if(nums[mid]>n){  
            high= mid-1;
        }
        else low= mid+1;;
    }
    return lastt;
}


int main(){
    int n,i,target;
    cout<< "Enter N: ";
    cin>>n;
    vector<int> nums(n);
    for(i=0; i<n; i++){
        cin>>nums[i];
    }
    cout<< "Enter Target: ";
    cin>>target;
    int a= first(nums,target);
    int b= last(nums,target);
    cout<<b-a;
}

