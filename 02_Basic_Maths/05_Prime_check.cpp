#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,count=0;
    cout<<"Enter Number: ";
    cin>>n;
    for(i=1; i<=n; i++){
        if(n%i==0){
            count++;
            if(n/i==i){
                count++;
            }
        }
    }
    if(count==2){
        cout<<n<<" is Prime Number";
    }
    else{
        cout<<n<<" is  not Prime Number";
    }
}