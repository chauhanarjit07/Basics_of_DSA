#include<bits/stdc++.h>
using namespace std;
class Solution {
    int largestRectangleArea(vector<int>& heights) {
        long long maxi=0;
        int n= heights.size();
        stack<int> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.top()]> heights[i]){
                int ele= st.top() , nse=i;
                st.pop();
                int pse= st.empty()? -1: st.top();
                long long ar= heights[ele]*(nse-pse-1);
                maxi= max(maxi, ar);
            }
            st.push(i);
        }
        while(!st.empty()){
            int ele= st.top() , nse=n;
            st.pop();
            int pse= st.empty()? -1: st.top();
            long long ar= heights[ele]*(nse-pse-1);
            maxi= max(maxi, ar);

        }
        return maxi;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n= matrix.size(), m= matrix[0].size();
        vector<int> col(m,0);
        int maxi=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]=='1'){
                    col[j]+=1;
                }
                else{
                    col[j]=0;
                }
            }
            int area= largestRectangleArea(col);
            maxi= max(maxi,area);
        }
        return maxi;
    }
    
};