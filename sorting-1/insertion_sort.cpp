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
for(i=0; i<n; i++){
    j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
        j--;
    }
}
for(i=0;i<n ;i++){
    cout<<arr[i]<<" ";
}
}