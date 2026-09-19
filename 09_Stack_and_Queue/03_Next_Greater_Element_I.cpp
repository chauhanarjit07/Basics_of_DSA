#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums2.size());
        stack<int> st;
        for(int i= nums2.size()-1; i>=0; i--){
            while(!st.empty() && nums2[i]>=st.top()) st.pop();
            if(st.empty()) res[i]= -1;
            else res[i]= st.top();
            st.push(nums2[i]);
        }
        vector<int>ans;
        for(int i=0; i<nums1.size(); i++){
            auto it= find(nums2.begin(), nums2.end(),nums1[i]);
            ans.push_back(res[it-nums2.begin()]);
        }
        return ans;
    }
};