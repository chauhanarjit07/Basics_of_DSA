#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cout<<"enter n: ";
cin>>n;
int arr[n];
cout<<"Enter Elements:"<<endl;
for(i=0;i<n ;i++){
    cin>>arr[i];
}
for(i=0; i<=n-2; i++){
    for(j=i+1; j<n; j++){
        if(arr[j]<arr[i]){
            swap(arr[j],arr[i]);
        }
    }
}
for(i=0;i<n ;i++){
    cout<<arr[i]<<" ";
}
}