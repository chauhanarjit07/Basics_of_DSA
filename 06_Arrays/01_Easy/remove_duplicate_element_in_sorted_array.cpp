#include<bits/stdc++.h>
using namespace std;

//---------------Two Pointer Method(Most Optimised Way)-----------------
void remove_duplicate(vector <int> &arr){
    int i=0;
    for(int j=1; j<arr.size(); j++){
        if(arr[i]!=arr[j]){
            arr[i+1]= arr[j];
            i++;
        }
    }
    for(int j=0; j<=i; j++){
        cout<< arr[j]<<" ";
    }
}



int main(){
    int n,i;
    cout<<"Enter N: ";
    cin>>n;
    vector <int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    remove_duplicate(arr);
}