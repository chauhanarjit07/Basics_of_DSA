#include<bits/stdc++.h>
using namespace std;

void name(int n);

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    name(n);
}

void name(int n){ 
    if(n==0){
        return;
    }
    cout<<"Alex"<<endl;
    name(n-1);
}