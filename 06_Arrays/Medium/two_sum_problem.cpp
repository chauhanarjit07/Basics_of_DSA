#include<bits/stdc++.h>
using namespace std;
void twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        for(int i=0; i<nums.size(); i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int left=0, right=arr.size()-1,sum;
        vector<int> arr1;
        while(left<right){
            sum= arr[left].first+arr[right].first;
            if(sum==target){
                arr1.push_back(arr[left].second);
                arr1.push_back(arr[right].second);
                break;
            }
            else if(sum>target){
                right--;
            }
            else{
                left++;
            }
    }
        
}



int main(){
    int n,i,t;
    cout<<"Enter N: ";
    cin>>n;
    vector<int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter Target: ";
    cin>>t;
    twoSum(arr,t);
}