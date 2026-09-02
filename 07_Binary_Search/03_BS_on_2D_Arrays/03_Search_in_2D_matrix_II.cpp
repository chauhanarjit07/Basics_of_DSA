#include<bits/stdc++.h>
using namespace std;


bool search(vector<vector<int>> &matrix, int target){
    int n= matrix.size(), m=matrix[0].size(),row=0,col=m-1;
    while(row<n && col>=0){
        if(matrix[row][col]== target) return true;
        else if(matrix[row][col]<target) row++;
        else col--;
    }
    return true;
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
    cout<<"Enter T: ";
    cin>>t;
    
    cout<<"The index is: "<<search(arr,t);
}

