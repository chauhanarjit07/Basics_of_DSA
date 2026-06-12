#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,n;
  cout<<"Enter rows: ";
    cin>> n;
    char a='A'+n-1;
  for(i=0; i<n; i++){
    for(j=0; j<=i; j++){
      cout<<a<<" ";
      a++;
    }
    a= 'A'+n-1-j;
    cout<<endl;
  }
  return 0;
}
