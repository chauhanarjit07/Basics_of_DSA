#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,n,k;
  cout<<"Enter rows: ";
    cin>> n;
  for(i=0; i<n; i++){
    for(j=0; j<n-i-1; j++){
      cout<<" ";
    }
    for(k=0; k<2*(i+1)-1; k++){
        cout<<"*";
      }
    cout<<endl;
  }
  return 0;
}
