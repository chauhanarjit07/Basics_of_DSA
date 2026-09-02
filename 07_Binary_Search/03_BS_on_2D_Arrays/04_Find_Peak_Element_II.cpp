#include<bits/stdc++.h>
using namespace std;

int Maxindex(vector<vector<int>> &matrix, int mid, int n){
    int index=-1;
    int maxvalue=-1;
    for(int i=0;i<n; i++){
        if(matrix[i][mid]> maxvalue){
            maxvalue= matrix[i][mid];
            index= i;
        }
    }return index;
}

vector<int> searchPeak(vector<vector<int>> &matrix){
    int n= matrix.size(), m=matrix[0].size(),low=0,high=m-1;
    while(low<=high){
        int mid= (low+high)/2;
        int maxin= Maxindex(matrix,mid, n);
        int left= mid-1>= 0? matrix[maxin][mid-1]: -1;
        int right= mid-1>= 0? matrix[maxin][mid+1]: -1;
        if(matrix[maxin][mid]>left && matrix[maxin][mid]>right) return {maxin,mid};
        else if(matrix[maxin][mid]<right) low= mid+1;
        else high= mid-1;
    }
    return {-1,-1};
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
}

