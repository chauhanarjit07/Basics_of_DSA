#include<bits/stdc++.h>
using namespace std; 



//---------Ques-1  Find the element at K th position in the Pascal triangle------------
void find_element(int row,int column){
    int rev=1;

    for(int i=1; i<column; i++){
        rev=rev*(row-i);
        rev= rev/(i);
    }
    cout<<" "<<rev;

}


//------------Print Any Given Row--------------
vector<int> n_row(int n){
    int ans=1;
    vector<int> anss;
    anss.push_back(1);
    for(int i=1; i<n; i++){
        ans= ans*(n-i);
        ans= ans/i;
        anss.push_back(ans);
    }

    return anss;
}


//----print pascal Triangle------------
void print_pascal(int row){
    int ans=1;
    vector<vector<int>> anss;
   for(int k=1; k<=row; k++){
    anss.push_back(n_row(k));
   }
    for(auto it:anss){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }    
}





int main(){
    print_pascal(6);
}