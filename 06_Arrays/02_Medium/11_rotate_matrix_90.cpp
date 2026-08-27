#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> matrix){
    int i,j,n=matrix.size();
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(i=0; i<n; i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    cout<<"Rotate Matrix is: "<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n,m,i,j;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter M: ";
    cin>>m;
    vector<vector<int>> matrix(n,vector<int> (m));
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Original Matrix is: "<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    rotate(matrix);

}