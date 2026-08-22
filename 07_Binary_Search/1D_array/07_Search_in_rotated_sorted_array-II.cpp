#include<bits/stdc++.h>
using namespace std;

int sortrotate(vector<int> &nums, int target){
    int low=0, n=nums.size();
    int high=n-1,mid=-1;

    while(low<=high){
        mid= (low+high)/2;
        if(nums[mid]==target) return true;
        if(nums[low]== nums[mid] && nums[mid] == nums[high]){
            low+=1;
            high-=1;
            continue;
        }
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && nums[mid]>=target){
                high= mid-1;
            }
            else low= mid+1;
        }
        else{
            if(nums[mid]<=target && nums[high]>=target){
                low= mid+1;
            }
            else high= mid-1;
        }

    }
    return false;
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
    cout<<sortrotate(nums,target);
}