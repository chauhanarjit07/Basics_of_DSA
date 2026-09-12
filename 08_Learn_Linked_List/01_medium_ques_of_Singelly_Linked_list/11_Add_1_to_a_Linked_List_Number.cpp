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
//--------------Brute Force---------------------
class Solution {
    Node* reverse(Node *head){
            if(head==nullptr || head->next==nullptr) return head;

            else{
                Node* newhead= reverse(head->next);
                Node* front= head->next;
                front->next= head;
                head->next= nullptr;
                return newhead;
            }
        }
  public:
    Node* addOne(Node* head) {
        Node* itr= head;
        if(itr==nullptr) return head;
        Node* newhead= reverse(head);
        itr= newhead;
        itr->data+=1;
        while(itr!=nullptr ){
            Node* abc= itr;
            if(itr->data>9 && abc->next!=nullptr ){
                itr->data=0;
                itr->next->data+=1;
            }
            if(abc->next==nullptr && abc->data>9){
                itr->data=0;
                Node* temp= new Node(1);
                abc->next= temp;
            }
            itr= itr->next;
        }
        newhead= reverse(newhead);
        return newhead; 
    }
};

//-------------------Optimal Approach---------------------------------
class Solution {
    int reversee(Node *temp){
            if(temp==nullptr ) return 1;

            else{
                int carry= reversee(temp->next);
                temp->data+=carry;
                if(temp->data<10) return 0;  
                
                temp->data=0;
                return 1; 
            }
        }
  public:
    Node* addOne(Node* head) {
        int carry= reversee(head);
        if(carry==1){
            Node* temp= new Node(1);
            temp->next= head;
            temp= head;
        }
        return head;
    }
};