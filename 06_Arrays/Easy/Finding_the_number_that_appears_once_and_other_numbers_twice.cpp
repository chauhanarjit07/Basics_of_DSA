#include<bits/stdc++.h>
using namespace std;

void once(vector<int> &arr, int n){
    int Xor=0,i;
    for(i=0; i<n; i++){
        Xor= Xor^arr[i];
    }
    cout<< Xor;
}


int main(){
    int n,i;
    cout<<"Enter N: ";
    cin>>n;
    vector <int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    once(arr, n);
}
