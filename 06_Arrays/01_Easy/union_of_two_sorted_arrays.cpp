#include<bits/stdc++.h>
using namespace std;

void Union(vector<int> &arr1,int n1,vector<int> &arr2, int n2){
    vector<int> unionarr;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionarr.size()==0 || unionarr.back()!=arr1[i]){
                unionarr.push_back(arr1[i]);
                
            }
            i++;
        }
        else{
            if(unionarr.size()==0 || unionarr.back()!=arr2[j]){
                unionarr.push_back(arr2[j]);
                
            }
            j++;
        }
    }
    while(j<n2){
        if(unionarr.size()==0 || unionarr.back()!=arr2[j]){
            unionarr.push_back(arr2[j]);
           
        }
        j++;
    }
    while(i<n1){
      
        if(unionarr.size()==0 || unionarr.back()!=arr1[i]){
            unionarr.push_back(arr1[i]);
        }
        i++;
        
    }
    for(auto it:unionarr){
        cout<<it<<" ";
    }
}




int main(){
    int n1,n2,i;
    cout<<"Enter Length of First Array: ";
    cin>>n1;
    vector <int> arr1(n1);
    for(i=0; i<n1; i++){
        cin>>arr1[i];
    }
    cout<<"Enter Length of Second Array: ";
    cin>>n2;
    vector <int> arr2(n2);
    for(i=0; i<n2; i++){
        cin>>arr2[i];
    }
    Union(arr1,n1,arr2,n2);
}