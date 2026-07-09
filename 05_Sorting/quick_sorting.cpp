#include<bits/stdc++.h>
using namespace std;
int ppoint(vector<int> &arr,int low, int high){
    int i=low;
    int j= high;
    while(i<j){
        while(arr[i]<=arr[low] && i<=high-1){
            i++;
        }
        while(arr[j]>arr[low] && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int> &arr,int low, int high){
    if(low<high){
        int pp= ppoint(arr,low,high);
        qs(arr,low,pp-1);
        qs(arr,pp+1,high);
    }
}

int main(){
    int n,i;
    cout<<"Enter N: ";
    cin>>n;
    vector<int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    qs(arr,0,n-1);
    cout<<"Sorted Array:"<<endl;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}