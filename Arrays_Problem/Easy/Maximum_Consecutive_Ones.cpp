#include<bits/stdc++.h>
using namespace std;

void maxi(vector<int> &arr, int n){
    int i,maxi=0, cnt=0;
    for(i=0; i<n; i++){
        if(arr[i]==1){
            cnt++;
            maxi= max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    cout<<maxi;

}


int main(){
    int n,x,i;
    cout<<"Enter N: ";
    cin>>n;
    vector <int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    
    maxi(arr,n);
}
