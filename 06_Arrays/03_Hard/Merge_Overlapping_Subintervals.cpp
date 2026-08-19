#include<bits/stdc++.h>
using namespace std;


//--------Optimal Solution -1-------------------------------
void merge(vector<vector<int>> &nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i=0; i< nums.size(); i++){
        int start= nums[i][0];
        int end= nums[i][1];
        if(!ans.empty() && end<= ans.back()[1]) continue;
        for(int j= i+1; j< nums.size(); j++){
            if(nums[j][0]<=end){
                end= max(end, nums[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
    }
    for(auto it:ans){
        cout<<"[";
        for(auto x:it){
            cout<<" "<<x<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
}


//-----------------------Optimal Solution-2------------------
void mergeo(vector<vector<int>> &nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    int n= nums.size();
    for(int i=0; i<n; i++){
        if(ans.empty() || ans.back()[1]< nums[i][0]){
            ans.push_back(nums[i]);
        }
        else{
            ans.back()[1]= max(ans.back()[1],nums[i][1]);
        }
    }
    for(auto it:ans){
        cout<<"[";
        for(auto x:it){
            cout<<" "<<x<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
}



int main(){
    int n,m,i,t;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter M: ";
    cin>>m;
    vector<vector<int>> arr(n, vector<int>  (m));
    for(i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j]; 
        }
    }
    
    mergeo(arr);
}
