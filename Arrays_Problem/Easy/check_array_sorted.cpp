#include<bits/stdc++.h>
using namespace std;
int check_array_sorted(vector <int> &arr){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<= arr[i+1]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}



    
int main(){
    int n,i;
    cout<<"Enter N: ";
    cin>>n;
    vector <int> arr(n);
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int a=check_array_sorted(arr);
    if(a==true){
        cout<<"Is Sorted";
    }
    else{
        cout<<"Not Sorted";
    }
}
