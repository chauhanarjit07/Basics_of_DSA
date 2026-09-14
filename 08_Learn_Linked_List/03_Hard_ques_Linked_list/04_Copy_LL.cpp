#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
    void insertcopy(Node* head){
        Node* temp = head;
        while(temp!= nullptr){
            Node* next= temp->next;
            Node* copy= new Node(temp->val);
            temp->next= copy;
            copy->next= next;
            temp= next;
        }
    }
    void connectramdon(Node* head){
        Node* temp= head;
        while(temp!= nullptr){
            Node* copy= temp->next;
            if(temp->random){
                copy->random= temp->random->next;
            }
            else{
                copy->random= nullptr;
            }
            temp= temp->next->next;
        }
    }

    Node* deepcopy(Node* head){
        Node* dummy= new Node(-1);
        Node* res= dummy;
        Node* temp= head;
        while(temp!=nullptr){
            res->next= temp->next;
            res= res->next;
            temp->next= temp->next->next;
            temp= temp->next;
        }
        return dummy->next;
    }
    public:
    Node* copyRandomList(Node* head) {
        insertcopy(head);
        connectramdon(head);
        return deepcopy(head);
    }
};