#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    vector<int> ls;
    cout<<"Enter Number: ";
    cin>>n;
    for(i=1; i<=n; i++){
        if(n%i==0){
            ls.push_back(i);
            if(n/i==i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it: ls) cout<< it<<" ";
    return 0;
} 