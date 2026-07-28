#include<bits/stdc++.h>
using namespace std;


void max_consecutive(vector<int> &nums){
    int i,n=nums.size(),cnt,maxlen=1;
    unordered_set<int> ans;
    for(i=0; i<n;i++){
        ans.insert(nums[i]);
    }
    for(auto it:ans){
        if(ans.find(it-1)==ans.end()){
            int x=it;
            cnt=1;
            while(ans.find(x+1)!=ans.end()){
                cnt++;
                x+=1;
            }
            maxlen= max(maxlen,cnt);

        }
    }
    cout<<"MAxlen= "<<maxlen;

}



int main(){
    int n,i,t;
    cout<<"Enter N: ";
    cin>>n;
    vector<int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    max_consecutive(arr);
}