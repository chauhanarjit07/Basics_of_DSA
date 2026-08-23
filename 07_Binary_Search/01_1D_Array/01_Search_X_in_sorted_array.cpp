#include<bits/stdc++.h>
using namespace std;


//------Rrcursivee Code---------
int bs(vector<int> &nums, int low, int high, int target){
    if(low>high){
        return -1;
    }
    int mid= (low+high)/2;
    if(nums[mid]==target) return mid;
    else if(target> nums[mid]) return bs(nums,mid+1,high,target);
    return bs(nums,low,mid-1,target);
}

//-----------Iterative Code-----------
int bss(vector<int> &nums,int target){
    int low=0, high= nums.size()-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(target>nums[mid]){
            low= mid+1;
        }
        else{
            high= mid-1;
        }
    }
    return -1;
}

int main(){
    int n,i;
    cout<< "Enter N: ";
    cin>>n;
    vector<int> nums(n);
    for(i=0; i<n; i++){
        cin>>nums[i];
    }
    int a=bss(nums,7);
    cout<<a;
}
