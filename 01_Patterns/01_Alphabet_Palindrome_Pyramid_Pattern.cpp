#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,n,k,l;
char a= 'A';
  cout<<"Enter rows: ";
    cin>> n;
  for(i=0; i<n; i++){
    for(j=0; j<n-i-1; j++){
      cout<<" ";
    }
    for(k=0; k<i+1; k++){
      cout<<a++;
    }
    --a;
    for(l=0; l<i; l++){ 
      a--;
      cout<<a;
    }
    a='A';
    cout<<endl;
  }
  return 0;
}
