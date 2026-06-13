#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,n,a=1;
  cout<<"Enter rows: ";
    cin>> n;
  for(i=0; i<n; i++){
    for(j=0; j<=i; j++){
        cout<<a+i;
    }
    cout<<endl;
  }
  return 0;
}
