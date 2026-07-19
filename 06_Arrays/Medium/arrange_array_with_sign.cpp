#include<bits/stdc++.h>
using namespace std;



//---The Function Arrange is only applicable if number of Positive and Negative Elements are Equal------------------- 
/*void arrange(vector<int> &arr, int n){
    int i,pos=0,neg=1;
    vector<int> ans(n);
    for(i=0; i<n; i++){
        if(arr[i]>0){
            ans[pos]=arr[i];
            pos+=2;
        }
        else{
            ans[neg]=arr[i];
            neg+=2;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
}*/



// --------If the number of Positive and Negative Number is Not Equal---
void arrange1(vector<int> &arr, int n){
    int i;
    vector<int> pos,neg,ans(n);
    for(i=0; i<n; i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(i=0; i<neg.size(); i++){
                ans[2*i]= pos[i];
                ans[2*i+1]= neg[i];
            
        }
        int index= neg.size()*2;
        for(i=neg.size(); i<pos.size(); i++){
            ans[index]=pos[i];
            index++;
        }
    }
    else{
        for(i=0; i<pos.size(); i++){
                ans[2*i]=  pos[i];
                ans[2*i+1]= neg[i]; 
        }
        int index= pos.size()*2;
        for(i=pos.size(); i<neg.size(); i++){
            ans[index]=neg[i];
            index++;    
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
}


int main(){
    int n,i,t;
    cout<<"Enter N: ";
    cin>>n;
    vector<int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    arrange1(arr,n);
    
}