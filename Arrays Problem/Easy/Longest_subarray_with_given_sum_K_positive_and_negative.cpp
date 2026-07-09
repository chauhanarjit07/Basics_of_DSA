#include<bits/stdc++.h>
using namespace std;

void ls(vector<int> &arr,int n, long long k){
    long long sum=0;
    int i=0, maxlen=0;
    map<long long,int> hmap;
    for(i=0; i<n; i++){
        sum+=arr[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        long long rem= sum-k;
        if(hmap.find(rem)!=hmap.end()){
            int len= i- hmap[rem];
            maxlen= max(maxlen,len);
        }
        if(hmap.find(sum)==hmap.end()){
            hmap[sum]=i;
        }
    }
    cout<<maxlen;
}





int main(){
    int n,i;
    long long k;
    cout<<"Enter N: ";
    cin>>n;
    vector<int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter K: ";
    cin>>k;
    ls(arr,n,k);
}