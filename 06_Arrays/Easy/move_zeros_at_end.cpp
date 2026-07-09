#include<bits/stdc++.h>
using namespace std;
void zero_at_corner(vector<int> &arr, int n){
    vector<int> temp(n);
    int i,j;
    for(i=0; i<n; i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(i=j+1;i<n; i++){
        if(arr[j]!=arr[i]){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    int n,i,d;
    cout<<"Enter N: ";
    cin>>n;
    vector <int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    zero_at_corner(arr,n);
}