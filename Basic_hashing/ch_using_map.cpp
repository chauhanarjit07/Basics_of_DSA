#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter String: ";
    getline(cin,s);
    map<char,int> mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]+=1;
    }
    
    int q;
    cout<<"Enter Q: ";
    cin>>q;
    while(q--){
        char ch;
        cout<<"Enter ch: ";
        cin>>ch;
        //----------------FETCHING---------------
        cout<<mp[ch]<<endl;
    }
}