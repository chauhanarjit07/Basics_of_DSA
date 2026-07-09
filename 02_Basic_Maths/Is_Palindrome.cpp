#include<bits/stdc++.h>
using namespace std;
int main(){
    int r=0, n,t,a;
    cout<<"Enter Number: ";
    cin>>n;
    a=n;
    while(n!=0){
        t= n%10;
        r=t+(r*10);
        n=n/10;
    }
    if(a==r){
        cout<<"The Number is Palindrome";
    }
    else{
        cout<<"The Number is Not Palindrome";
    }
    return 0;
}