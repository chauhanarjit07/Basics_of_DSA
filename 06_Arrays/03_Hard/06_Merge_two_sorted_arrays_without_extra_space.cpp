#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr1, vector<int> &arr2){
    int left= arr1.size()-1;
    int right= arr2[0];
    while(left>=0 && right<= arr2.size()-1){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--,right++;
        }
        else{
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    for(auto it:arr1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:arr2){
        cout<<it<<" ";
    }
}
void swapfn(vector<int> &arr1, vector<int> &arr2,int in1,int in2){
    if(arr1[in1]>arr2[in2]){
        swap(arr1[in1],arr2[in2]);
    }
}
void merge2(vector<int> &arr1, vector<int> &arr2){
    int n= arr1.size();
    int m= arr2.size();
    int len= m+n;
    int gap= (len/2)+(len%2);
    while(gap>0){
        int left=0;
        int right= left+ gap;
        while(right< len){
            if(left<n && right>= n){
                swapfn(arr1, arr2,left,right-n);
            }
            else if(left>=n){
                swapfn(arr2, arr2,left-n,right-n);
            }
            else{
                swapfn(arr1, arr1,left,right);
            }
            left++,right++;
        }
        if(gap==1) {break;}
        gap= (gap/2)+(gap%2);
    }
    for(auto it:arr1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:arr2){
        cout<<it<<" ";
    }
}

int main(){
    int n,m;
    cin>>n;
    vector<int> arr1(n);
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cin>>m;
    vector<int> arr2(m);
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    merge2(arr1,arr2);
}
