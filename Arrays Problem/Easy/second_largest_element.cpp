#include<bits/stdc++.h>
using namespace std;
void slargest(vector<int> &arr){
    int largest=arr[0];
    int slargest=-1;
    for(int i=0; i<arr.size(); i++){
        if(largest<arr[i]){
            slargest= largest;
            largest= arr[i];
        }
        else if(slargest<arr[i] && arr[i]!= largest){
            slargest= arr[i];
        }
    }
    cout<<"Second Largest element: "<<slargest;
}




int main(){
    int n,i;
    cout<<"Enter N: ";
    cin>>n;
    vector <int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    slargest(arr);
}