#include<bits/stdc++.h>
using namespace std;
void number(int n,int i);

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    number(n,1);
}

void number(int n, int i){ 
    if(n<i){
        return;
    }
    cout<<i<<" ";
    number(n,i+1);
}