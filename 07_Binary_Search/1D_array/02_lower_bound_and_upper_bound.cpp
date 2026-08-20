#include<bits/stdc++.h>
using namespace std;




//-----------Iterative Code-----------
void LowerBound(vector<int> &nums,int target){
    int low=0, high= nums.size()-1;
    int mid,ans=nums.size();
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else{
            low= mid+1;
        }
    }
    cout<<ans;
    return ;
}

void UpperBound(vector<int> &nums,int target){
    int low=0, high= nums.size()-1;
    int mid,ans=nums.size();
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else{
            low= mid+1;
        }
    }
    cout<<ans;
    return ;
}

int main(){
    int n,i;
    cout<< "Enter N: ";
    cin>>n;
    vector<int> nums(n);
    for(i=0; i<n; i++){
        cin>>nums[i];
    }
    LowerBound (nums,6);
}