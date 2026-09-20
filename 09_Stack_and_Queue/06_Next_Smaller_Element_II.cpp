#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextSmallerElements(vector<int>& nums) {
        int n= nums.size();
        vector<int> res(n);
        stack<int> st;
        for(int i= 2*n-1; i>=0; i--){
            while(!st.empty() && nums[i%n]<= st.top()) st.pop();
            if(i<n){
                if(st.empty()) res[i]=-1;
                else res[i]= st.top();
            }
            st.push(nums[i%n]);

        }
        return res;
    }
};