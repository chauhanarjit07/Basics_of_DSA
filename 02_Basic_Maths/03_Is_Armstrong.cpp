#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,t,s=0,x;
    cout<<"Enter number: ";
    cin>>n;
    x=n;
    int a= (int)(log10(n))+1;
    while(n!=0){
        t= n%10;
        s= s+(int)(pow(t,a));
        n= n/10;
    }
    if(x==s){
        cout<<"The Number Is Armstrong";
    }
    else{
        cout<<"The Number Is Not Armstrong";
    }
    return 0;
}
