#include<bits/stdc++.h>
using namespace std;


void zero_matrix(vector<vector<int>> &nums){
    int n=nums.size(),m=nums[0].size(),i,j;
    vector<int> row(n,1),col(m,1);
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(nums[i][j]==0){
                row[i]=0;
                col[j]=0;
            }
        } 
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(row[i]==0|| col[j]==0){
                nums[i][j]=0;
                
            }
        }
    }
    cout<<endl<<endl;
    for(i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<nums[i][j]<<" "; 
        }
        cout<<endl;
    }
}

// void zero_matrix(vector<vector<int>> &nums){
//     int n=nums.size(),m=nums[0].size(),i,j,col0=1;
//     for(i=0; i<n; i++){
//         for(j=0; j<m; j++){
//             if(nums[i][j]==0){
//                 nums[i][0]=0;
//                 if(j!=0){
//                     nums[0][j]=0;
//                 }
//                 else{
//                     col0=0;
//                 }
//             }
//         }
//     }

//     for(i=1; i<n; i++){
//         for(j=1; j<m; j++){
//             if(nums[i][j]!=0){
//                 if(nums[0][j]==0|| nums[i][0]==0){
//                     nums[i][j]=0;
//                 }
//             }   
//         }
//     }

//     if(nums[0][0]==0){
//         for(j=0;j<m;j++){
//             nums[0][j]=0;
//         }
//     }

//     if(col0==0){
//         for(i=0;i<n;i++){
//             nums[i][0]=0;
//         }
//     }

//     cout<<endl<<endl;
//     cout<<"The Zero Matrix is: "<<endl;

    // for(i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<nums[i][j]<<" "; 
    //     }
    //     cout<<endl;
    // } 

// }



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
    zero_matrix(arr);
}