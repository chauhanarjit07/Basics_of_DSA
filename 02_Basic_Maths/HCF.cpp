#include<bits/stdc++.h>
using namespace  std;
int main(){
    int a,b,i;
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;
    while(a>0 && b>0){
        if(a>b){
            a= a%b;
        }
        else{
            b=b%a;
        }
        if(a==0){
            cout<<"The HCF is: "<<b;
        }
        if(b==0){
            cout<<"The HCF is: "<<a;
        }
    }
}