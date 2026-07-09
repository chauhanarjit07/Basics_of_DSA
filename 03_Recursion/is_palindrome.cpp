#include<bits/stdc++.h>
using namespace std;
bool swap_arr(int i,string &s);
bool swap_arr(int i, string &s){
    if(i>s[s.size()-1-i]){
        return true;
    }
    if(s[i]!= s[s.size()-1-i]){
        return false;
    }
    return swap_arr(i+1,s);
}

int main(){
    string s;
    cin>>s;
    if(swap_arr(0,s)){
        cout<<"Is Palindrome";
    }
    else{
        cout<<"Is Not Palindrome";
    }
    return 0;
}