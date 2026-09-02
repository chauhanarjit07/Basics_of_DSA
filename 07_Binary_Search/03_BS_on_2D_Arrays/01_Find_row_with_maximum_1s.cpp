#include<bits/stdc++.h>
using namespace std;


int lowerbound(vector<int> &a, int x){
    int n= a.size(),ans=n, low=0, high= n-1;

    while(low<= high){
        int mid= (low+high)/2;

        if(a[mid]>=x){
            ans= mid;
            high= mid-1;
        }
        else low= mid+1;
    }
    return ans;

}


int ones(vector<vector<int>> &matrix){
    int n= matrix.size(),m= matrix[0].size(),maxcnt=0, index=-1;
    for(int i=0; i<n; i++){
        int cnt= m-lowerbound(matrix[i],1);
        if(maxcnt<cnt){
            maxcnt= cnt;
            index=i;
        }
    }
    return index;
}



    
int main(){
    int n,m,i,t;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter M: ";
    cin>>m;
    vector<vector<int>> arr(n, vector<int>  (m));
    for(i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j]; 
        }
    }
    
    cout<<"tHE iNDEX IS: "<<ones(arr);
}

