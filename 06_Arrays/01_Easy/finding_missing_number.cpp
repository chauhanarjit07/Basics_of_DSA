#include<bits/stdc++.h>
using namespace std;

void missing_number(vector<int> &arr,int n){
    int i, xor1=0,xor2=0;
    for(i=0; i<n-1; i++){
        xor1= xor1^(i+1);
        xor2= xor2^(arr[i]);
    }
    xor1= xor1^n;
    int a=xor1^xor2;
    cout<<"The Missing Number: "<<a;
}
int main(){
    int n,i;
    cout<<"Enter Value of N: ";
    cin>>n;
    vector <int> arr(n-1);
    for(i=0; i<n-1; i++){
        cin>>arr[i];
    }
    missing_number(arr,n);
}