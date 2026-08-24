#include<bits/stdc++.h>
using namespace std;

double multiply(double num,int n){
    int ans=1;
    for(int i=0; i<n; i++){
        ans= ans*num;
    }
    return ans;
}

double square_root(int n, int m){

    double low=1,high=m,eps=1e-6;
    while((high-low)>eps){
        double mid= mid=(low+high)/2.0;
        if(multiply(mid,n)<m){
            low=mid;
        }
        else high= mid;
    }
    return low;
}

int main(){
    int n,m;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter M: ";
    cin>>m;
    cout<<" Root of "<<m << " with base "<<n<<" is: "<< square_root(n,m);
}