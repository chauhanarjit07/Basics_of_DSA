#include<bits/stdc++.h>
using namespace std;

int sqrtt(int num){

    int low=1, high=num,ans =1;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid<= num){
            ans=mid;
            low= mid+1;
        }
        else high= mid-1;
    }

    return ans;
}

int main(){
    int num;
    cout<<"Enter Num: ";
    cin>>num;
    cout<<"Square Root of "<<num <<" is: "<< sqrtt(num);
}