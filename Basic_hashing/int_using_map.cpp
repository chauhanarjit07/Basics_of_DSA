#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
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
    int q;
    cin>>q;
    while(q--){
        int num;
        cout<<"Enter Num: ";
        cin>>num;
        //----------------FETCHING---------------
        cout<<mp[num]<<endl;
    }
}