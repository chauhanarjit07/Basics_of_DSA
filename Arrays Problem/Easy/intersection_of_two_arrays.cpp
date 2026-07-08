#include<bits/stdc++.h>
using namespace std;

void intersection(vector<int> &arr1,int n1,vector<int> &arr2, int n2){
    vector<int> ans;
    int i=0,j=0;
    //----Logic---
    while(i<n1 && j<n2){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    //--Printing the Intersection Array------------
    for(auto it:ans){
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
    intersection(arr1,n1,arr2,n2);
}