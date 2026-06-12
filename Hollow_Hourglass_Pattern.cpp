#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,j,n,k;
  cout<<"Enter rows: ";
  cin>> n;
  for(i=0; i<n;i++){
    for(j=0; j<n-i; j++){
      cout<<"*";
    }
    for(k=0; k<2*i; k++){
      cout<<" ";
    }
    for(j=0; j<n-i; j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(i=0; i<n; i++){
    for(j=0; j<=i;j++){
      cout<<"*";
    }
    int x=(2*n)-2-(2*i);
    for(k=0; k<x;k++){
    cout<<" ";
  }
  for(j=0; j<=i;j++){
    cout<<"*";
  }
    cout<<endl;
  }
  return 0;
}
