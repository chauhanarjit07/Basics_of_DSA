#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int> &arr, int n){
    int i, index=-1;
    for(i=n-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(arr.begin(),arr.end());
        
    }
    for(i=n-1; i>=0; i--){
        if(arr[index]<arr[i]){
            swap(arr[index],arr[i]);
            break;
        }
    }
    reverse(arr.begin()+1+index, arr.end());
    cout<<"The Next Permutation is: ";
    for(auto it:arr){
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
    permutation(arr,n);
    
}