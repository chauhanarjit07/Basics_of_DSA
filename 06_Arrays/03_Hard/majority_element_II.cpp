#include<bits/stdc++.h>
using namespace std;
//-------Better Approach--------
void majorityElement1(vector<int>& nums) {
    map<int,int> hmap;
    vector<int> ans;
    int n= nums.size();
    for(int i=0; i<n; i++){
        hmap[nums[i]]+=1;
        if(hmap[nums[i]]==(int)(n/3)+1){
            ans.push_back(nums[i]);
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
        
}

//--------optimal Approach-----------------
void majorityElement(vector<int> &nums){
    vector<int> ans;
    int cnt1=0,cnt2=0,el1=INT_MIN,el2=INT_MIN,n=nums.size();
    for(int i=0; i<n; i++){
        if(cnt1==0 && el2!=nums[i]){
            cnt1=1;
            el1=nums[i];
        }
        else if(cnt2==0 &&el1 !=nums[i]){
            cnt2=1;
            el2=nums[i];
        }
        else if(el1==nums[i]){
            cnt1++;
        }
        else if(el2=nums[i]){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }   
    }
    cnt1=0,cnt2=0;
    for(int i=0; i<n; i++){
        if(el1==nums[i]){
            cnt1++;
        }
        if(el2 ==nums[i]){
            cnt2++;
        }
    }
    if(cnt1>=(int)n/3 +1){
        ans.push_back(el1);
    }
    if(cnt2>=(int)n/3 +1){
        ans.push_back(el2);
    }
    for(auto it:ans){
        cout<<it<<" ";
    }

}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    majorityElement(arr);
}