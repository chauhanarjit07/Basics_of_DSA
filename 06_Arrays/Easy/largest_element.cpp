#include<bits/stdc++.h>
using namespace std;
void max(vector <int> arr, int n){
    int i, large=arr[0];
    for(i=0;i<n-1; i++){
        if(large<arr[i+1]){
            large= arr[i+1];
        }
    }
    cout<<"Largest element: "<<large;
   
}
int main(){
    int n,i;
    cout<<"Enter N: ";
    cin>>n;
    vector <int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    max(arr,n);
}