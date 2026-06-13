#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,j,n,k;
  cout<<"Enter rows: ";
  cin>> n;
  for(i=0; i<2*n-1; i++){
    for(j=0; j<2*n-1; j++){
      int top= i;
      int bottom= (2*n-2)-i;
      int left= j;
      int right= (2*n-2)-j;
      cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
    }
    cout<<endl;
  }
  return 0;
}
