#include<bits/stdc++.h>
using namespace std;


//-----------Brute Force------------------
void sum_3_bf(vector<int> & nums){
    
    set <vector<int>> st;
    int i,j,k,n=nums.size();
    for(i=0; i<n ;i++){
        for(j=i+1; j<n; j++){
            for(k=j+1; k<n; k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> temp={nums[i],nums[j],nums[k]};
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


//--------Better Approach-----------
void sum_3_ba(vector<int>& nums){
    set<vector<int>> st;
    int i,j,k,n= nums.size();
    for(i=0; i<n; i++){
        set<int> temp;
        for(j=i+1; j<n; j++){
            temp.insert(nums[j]);
            k=-(nums[i]+nums[j]);
            if(temp.find(k)!= temp.end()){
                vector<int> tt={nums[i],nums[j],k};
                sort(tt.begin(),tt.end());
                st.insert(tt);
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

//-------Optimal Approach--------------------
void sum_3_oa(vector<int>& nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    int i,n=nums.size();
    for(i=0; i<n; i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum= nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                vector<int> temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
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
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sum_3_oa(arr);
}