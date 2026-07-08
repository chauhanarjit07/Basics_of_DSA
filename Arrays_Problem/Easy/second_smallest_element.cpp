#include<bits/stdc++.h>
using namespace std;
void ssmallest(vector<int> &arr){
    int smallest=arr[0];
    int ssmallest= INT_MAX;
    for(int i=0; i<arr.size(); i++){
        if(smallest>arr[i]){
            ssmallest= smallest;
            smallest= arr[i];
        }
        else if(ssmallest>arr[i] && arr[i]!= smallest){
            ssmallest= arr[i];
        }
    }
    cout<<"Second Largest element: "<<ssmallest;
}




int main(){
    int n,i;
    cout<<"Enter N: ";
    cin>>n;
    vector <int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    ssmallest(arr);
}