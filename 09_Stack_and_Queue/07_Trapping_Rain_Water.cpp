#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int maxleft=0, maxright=0, l=0, r=n-1,total=0;
        while(l<r){
            if(height[l]<= height[r]){
                if(height[l]< maxleft) total+= maxleft- height[l];
                else maxleft= height[l];
                l= l+1;
            }
            else{
                if(maxright> height[r]) total+= maxright- height[r];
                else maxright= height[r];
                r=r-1;
            }
        }
        return total;
    }
};