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
    //--------------Pre Computing----------------
    int hash[100000]={0};
    for(int i=0;i<n; i++){
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"Enter Q: ";
    cin>>q;
   
    while(q--){
        int num;
        cout<<"Enter Num: ";
        cin>>num;
        //----------------FETCHING---------------
        cout<<hash[num]<<endl;
    }
}