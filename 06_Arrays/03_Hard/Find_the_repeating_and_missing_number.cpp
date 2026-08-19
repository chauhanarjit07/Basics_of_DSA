#include<bits/stdc++.h>
using namespace std;

//=-------------optimal:1------------
void missing(vector<int> &nums){
    int n= nums.size();
    int s=0,s2=0,sn,sn2;
    sn= (n*(n+1))/2;
    sn2= (n*(n+1)*(2*n+1))/6;
    for(int i=0; i<n; i++){
        s+=nums[i];
        s2+= (nums[i]*nums[i]);
    }
    int val1= s-sn;
    int val2= s2- sn2;
    
    val2= val2/val1;
    
    int x= (val1+val2)/2;
    int y= val2-x;

    cout<<x<<" "<<y;
}

//----------------optimal:2----------------
void xoorr(vector<int> &nums){
    int xorr=0,n=nums.size();
    for(int i=0; i<n; i++){
        xorr= xorr^nums[i];
        xorr= xorr^(i+1);
    }
    int bitnum=0;
    while(1){
        if((xorr & (1<<bitnum))!=0){
            break;
        }
        bitnum++;
    }
    int ones=0;
    int zeros=0;
    for(int i=0; i<n; i++){
        if((nums[i] & (1<<bitnum))!=0){
            ones= ones^nums[i];
        }
        else{
            zeros= zeros^nums[i];
        }
    }

    for(int i=1; i<=n; i++){
        if((i & (1<<bitnum))!=0){
            ones= ones^i;
        }
        else{
            zeros= zeros^i;
        }
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        if(zeros==nums[i]) cnt++;
    }
    if(cnt==2) cout<<zeros<<" "<<ones;
    else cout<<ones<<" "<<zeros;
    

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    xoorr(arr);
    
}