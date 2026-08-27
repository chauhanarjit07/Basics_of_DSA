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
for(i=n-1; i>=0; i--){
    int didswap=0;
    for(j=0; j<i; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            didswap=1;
        }
        if(didswap==0){
            break;
        }
    }
}
for(i=0;i<n ;i++){
    cout<<arr[i]<<" ";
}
}