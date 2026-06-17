#include<bits/stdc++.h>
using namespace std;
int sum(int n);
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"The sum is: "<<sum(n);
}

