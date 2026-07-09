#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,j,n;
  char a='A';
  cout<<"Enter rows: ";
  cin>> n;
  for(i=0; i<n; i++){
    for(j=0; j<=i;j++){
      cout<<a<<" ";
    }
    a++;
    cout<<endl;
  }
  return 0;
}
