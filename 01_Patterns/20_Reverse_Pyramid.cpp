#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,n,k;
  cout<<"Enter rows: ";
    cin>> n;
  for(i=0; i<n; i++){
    for(j=0; j<=i; j++){
      cout<<" ";
    }
    for(k=0; k<(2*n)-1-(2*i); k++){
        cout<<"*";
      }
    cout<<endl;
  }
  return 0;
}
