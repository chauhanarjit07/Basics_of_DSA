#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,j,n,k,l,a=1;
  cout<<"Enter rows: ";
  cin>> n;
  for(i=0; i<n; i++){
    for(j=0; j<=i;j++){
      cout<<a+j;
    }
    int x=(2*n)-2-(2*i);
    for(k=0; k<x;k++){
    cout<<" ";
  }
  for(l=0; l<=i;l++){
    cout<<a+j-1-l;
  }
    cout<<endl;
  }
  return 0;
}
