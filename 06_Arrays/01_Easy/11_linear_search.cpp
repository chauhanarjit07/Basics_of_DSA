#include<bits/stdc++.h>
using namespace std;

void linear_search(vector<int> &arr, int n,int x){
    int i;
    for(i=0; i<n; i++){
        if(arr[i]==x){
            cout<<"The Index for "<<x<<" is "<<i<<" "<<endl;
        }
    }
}


int main(){
    int n,x,i;
    cout<<"Enter N: ";
    cin>>n;
    vector <int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter x: ";
    cin>>x;
    linear_search(arr,n,x);
}
