#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for(int i=0; i< asteroids.size(); i++){
            while(!ans.empty() && asteroids[i]<0 && ans.back()>0 && ans.back()<abs(asteroids[i])){
                ans.pop_back();
            }
            if(asteroids[i]> 0){ 
                ans.push_back(asteroids[i]);
            }
            if(!ans.empty() && asteroids[i]< 0 && ans.back()<0){ 
                ans.push_back(asteroids[i]);
            }
            if(!ans.empty() && asteroids[i]<0 && abs(asteroids[i])== ans.back()) ans.pop_back();
            else if(ans.empty() && asteroids[i]<0) ans.push_back(asteroids[i]);
            
        }
        return ans;
    }
};