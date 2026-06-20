#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    
    //--------------Pre Computing-----------------
    int hash[256]={0};
    for(int i=0;i<s.size(); i++){
        hash[s[i]]+=1;
    }
    
    int q;
    cout<<"Enter Q: ";
    cin>>q;

    while(q--){
        char ch;
        //----------------FETCHING---------------
        cout<<"Enter Character: ";
        cin>>ch;
        cout<<hash[ch]<<endl;
    }
}