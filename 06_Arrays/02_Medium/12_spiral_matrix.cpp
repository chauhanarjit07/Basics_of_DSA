  #include<bits/stdc++.h>
  using namespace std;

  void spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int i, top=0,left=0,right=matrix[0].size()-1,bottom=matrix.size()-1;
        while(left<=right && top<= bottom){

            for(i=left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
            for(i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            if(left<=right){
            for(i=bottom; i>=top; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
            }
        }
        
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
    cout<<"Matrix: "<<endl;
    for(i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    }
    spiralOrder(arr);
}

