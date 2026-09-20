#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextSmallerElement(vector<int>& nums) {
        vector<int> res(nums.size());
        stack<int> st;
        for(int i=0; i<nums.size(); i++){
            while(!st.empty() && nums[i]<=st.top()) st.pop();
            if(st.empty()) res[i]= -1;
            else res[i]= st.top();
            st.push(nums[i]);
        }
        return res;
    }
};