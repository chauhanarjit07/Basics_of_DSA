#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> &piles){
    int largest= INT_MIN;
    for(int i=0; i<piles.size(); i++){
        largest= max(largest,piles[i]);
    }
    return largest;
}

int times(vector<int> &piles, int num){
    int time=0;
    for(int i=0; i<piles.size(); i++){
        time+=ceil((double)piles[i]/(double)num);
    }
    return time;
}

int lesstime(vector<int> &piles,int h){
    int low=1,high=largest(piles),n=piles.size();
    while(low<=high){
        int mid= (low+high)/2;
        int ttime= times(piles,mid);
        if(ttime<=h){
            high= mid-1;
        }
        else low= mid+1;
    }
    return low;
}


int main(){
    int n,h;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cin>>h;
    cout<<"Ans: "<<lesstime(nums,h);
}