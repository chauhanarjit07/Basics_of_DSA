#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n,int a,int b);

int main(){
    int n,a=0,b=1;
    cout<<"Enter N: ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
fibonacci(n,a,b);
}

void fibonacci(int n,int a,int b){
    int c=a+b;
    if(n==2){
        return;
    }
    cout<<c<<" ";
    a=b;
    b=c;
    fibonacci(n-1,a,b);
}