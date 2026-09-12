#include<bits/stdc++.h>
using namespace std;
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
    Node* segregate(Node* head) {
        if(head==nullptr || head->next==nullptr) return head;
        Node* temp= head,*zerohead= new Node(-1),*onehead= new Node(-1),*twohead= new Node(-1);
        Node* zero= zerohead,*one= onehead,*two= twohead;
        
        while(temp!=nullptr){
            if(temp->data== 0){
                zero->next= temp;
                zero= zero->next;
            }
            else if(temp->data==1){
                one->next= temp;
                one= one->next;
            }
            else{
                two->next= temp;
                two= two->next;
            }
            temp= temp->next;
        }
        
        zero->next= (onehead->next)? onehead->next: twohead->next;
        one->next= twohead->next;
        two->next= nullptr;
        
        Node* ans= zerohead->next;
        delete(zerohead);
        delete(onehead);
        delete(twohead);
        
        return ans;
        
    }
};