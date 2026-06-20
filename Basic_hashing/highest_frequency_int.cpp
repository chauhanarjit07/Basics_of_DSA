#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, max=0,maax;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]+=1;
    }
    for(auto it:mp){
        if(it.second>max){
            max= it.second;
            maax= it.first;
        }
    }
    cout<<"Highest Frequency Number: "<<maax;
}