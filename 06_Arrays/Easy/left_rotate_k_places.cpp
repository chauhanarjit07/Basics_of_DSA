#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr,int low, int high) {
        int i,j;
        for( i=low,  j=high;i<j;i++,j--){
            swap(arr[i],arr[j]);
        }
    }
void left_rotate(vector<int> &arr,int n,int d){
    d= d%n;
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
}

int main(){
    int n,i,d;
    cout<<"Enter N: ";
    cin>>n;
    vector <int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter d: ";
    cin>>d;
    left_rotate(arr,n,d);
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}