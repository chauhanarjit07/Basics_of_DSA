#include<bits/stdc++.h>
using namespace std;
void number(int n);

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    number(n);
}

void number(int n){ 
    if(n==0){
        return;
    }
    number(n-1);
    cout<<n<<" ";
}