#include<bits/stdc++.h>
using namespace std;




bool search(vector<vector<int>> &matrix, int target){
    int low=0,n= matrix.size(),m= matrix[0].size(),high= (m*n)-1;
    while(low<= high){
        int mid= (low+high)/2;
        int row= mid/m;
        int col= mid%m;
        if( matrix[row][col]== target) return true;
        else if(matrix[row][col]< target) low= mid+1;
        else high= mid-1;
    }
    return false;

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

