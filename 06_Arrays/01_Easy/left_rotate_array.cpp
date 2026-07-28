#include<bits/stdc++.h>
using namespace std;

void Left_rotate(vector<int> &arr, int n){
    int temp=arr[0];
    for(int i=0;i<n; i++){
        arr[i]= arr[i+1];
    }
    arr[n-1]=temp;
}
int main(){
    int n,i;
    cout<<"Enter N: ";
    cin>>n;
    vector <int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    Left_rotate(arr,n);
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}