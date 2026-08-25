#include<bits/stdc++.h>
using namespace std;


bool possible(vector<int> &nums,int day,int m, int k){
    int cnt=0,boq=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]<=day){
            cnt+=1;
        }
        else{
            boq+=(cnt/k);
            cnt=0;
        }
    }
    boq+=(cnt/k);
    return boq>=m;

}

int bouquets(vector<int> &bloomDay,int m,int k){
    int n=bloomDay.size();
    if(m*k>n) return -1;
    int minn=INT_MAX,maxx=INT_MAX;
    for(int i=0; i<n; i++){
        minn= min(bloomDay[i],minn);
        maxx=max(bloomDay[i],maxx);
    }
    int low=minn,high= maxx;
    while(low<=high){
        int mid= (low+high)/2;
        if(possible(bloomDay,mid,m,k)){
            high= mid-1;
        }
        else low= mid+1;
    }
    return low;
}


int main(){
    int n,m,k;
    cout<<"Enter N: ";
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cout<<"Enter M: ";
    cin>>m;
    cout<<"Enter K: ";
    cin>>k;
    cout<<"Ans: "<< bouquets(nums,m,k);
}