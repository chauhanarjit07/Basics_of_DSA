#include<bits/stdc++.h>
using namespace std;


int findMin(vector<int>& nums) {
    int low=0, n=nums.size();
    int high= n-1;
    int ans= INT_MAX;
    while(low<=high){
        int mid= (low+high)/2;
        if(nums[low]<= nums[high]){
            ans= min(ans,nums[low]);
            break;
        }
        if(nums[low]<=nums[mid]){
            ans= min(ans,nums[low]);
            low= mid+1;
        }
        else{
            ans= min(ans,nums[mid]);
            high= mid-1;
        }
    }
    return ans;
}

int main(){
    int n,i;
    cout<< "Enter N: ";
    cin>>n;
    vector<int> nums(n);
    for(i=0; i<n; i++){
        cin>>nums[i];
    }
    findMin(nums);
}