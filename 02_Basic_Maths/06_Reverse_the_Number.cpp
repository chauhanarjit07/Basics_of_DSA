#include<bits/stdc++.h>
using namespace std;
int main(){
    int r=0, n,t;
    cout<<"Enter Number: ";
    cin>>n;
    while(n!=0){
        t= n%10;
        r=t+(r*10);
        n=n/10;
    }
    cout<<"Reverse Number: "<<r;
    return 0;
}