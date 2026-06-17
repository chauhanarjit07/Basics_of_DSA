#include<bits/stdc++.h>
using namespace std;
void swap_arr(int n, int arr[], int i);
void swap_arr(int n, int arr[], int i){
    if(i>(n-1-i)){
        return ;
    }
    swap(arr[i],arr[n-1-i]);
    swap_arr(n,arr,i+1);
}

int main(){
    int n,i;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    for(i=0; i<n;i++){
        cin>>arr[i];
    }
    swap_arr(n,arr,0);
    for(i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}