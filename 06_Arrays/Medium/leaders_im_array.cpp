#include<bits/stdc++.h>
using namespace std;
void leader(vector<int> &arr){
    int i,maax=INT_MIN;
    vector<int> ans;
    for(i=arr.size()-1; i>=0; i--){
        if(maax<arr[i]){
            ans.push_back(arr[i]);
        }
        maax=max(maax,arr[i]);
    }
    sort(ans.begin(), ans.end());
    for(auto it:ans){
        cout<<it<<" ";
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
    leader(arr);

}