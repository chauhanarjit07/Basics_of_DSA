#include<bits/stdc++.h>
using namespace std;
class Solution {
    vector<int> left(vector<int> &arr){
        vector<int> ans(arr.size());
        stack<int> st;
        for(int i=0; i<arr.size(); i++){
            while(!st.empty() && arr[st.top()]>= arr[i]) st.pop();
            ans[i]= st.empty()?-1 : st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> right(vector<int> &arr){
        vector<int> ans(arr.size());
        stack<int> st;
        for(int i=arr.size()-1; i>=0; i--){
            while(!st.empty() && arr[st.top()]> arr[i]) st.pop();
            ans[i]= st.empty()?arr.size() : st.top();
            st.push(i);
        }
        return ans;
    }
public:
    int sumSubarrayMins(vector<int>& arr) {
        long long total=0;
        long long MOD = 1e9 + 7;
        vector<int> leftt= left(arr),rightt= right(arr);
        for(int i=0; i<arr.size(); i++){
            long long left= i- leftt[i],right= rightt[i]-i;
            total = (total + ((left * right % MOD) * arr[i]) % MOD) % MOD;
        }
        return total;
    }
};