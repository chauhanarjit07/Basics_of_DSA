#include<bits/stdc++.h>
using namespace std;


//-----------Brute Force--------------
void sum_4_bf(vector<int> &nums, int target){
    int i,j,k,l,n=nums.size();
    set<vector<int>> st;
    sort(nums.begin(),nums.end());
    
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            for(k=j+1; k<n; k++){
                for(l=k+1; l<n; l++){
                    int sum=nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target){
                        vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(),st.end());
    for(auto it:ans){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}


//----------------Better Approach---------
void sum_4_ba(vector<int> &nums, int target){
    int i,j,k,n=nums.size();
    set<int> tem;
    set<vector<int>> st;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            for(k=j+1; k<n; k++){
                tem.insert(nums[j]);
                int sum=target-(nums[i]+nums[j]+nums[k]);
                if(tem.find(sum)!= tem.end()){
                    vector<int> temp={nums[i],nums[j],nums[k],sum};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    for(auto it:ans){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}


//-----------Optimal Approach-------------
void  sum_4_oa(vector<int>& nums, int target){
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for(int i= 0;i<n; i++) {
        if(i>0 && nums[i] == nums[i-1]) continue;
        for(int j= i+1;j<n; j++) {
            if(j != (i+1) && nums[j] == nums[j-1]) continue;
            int k = j + 1;
            int l = n - 1;
            while(k < l) {
                long long sum = nums [i];
                sum += nums [j] ;
                sum += nums [k] ;
                sum += nums [l];   
                if(sum == target) {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++; l --;
                    while(k < l && nums [k] == nums [k-1] ) k++;
                    while(k < l && nums [l] == nums [l+1] ) l --;
                }
                else if(sum < target) k++;
                else l --;          
            }
        }
    }
    for(auto it:ans){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int n,t;
    cout<<"Enter Number: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"ENter Target: ";
    cin>>t;
    sum_4_oa(arr,t);
}