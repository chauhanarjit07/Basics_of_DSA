#include<bits/stdc++.h>
using namespace std;
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
  int length(Node* slow,Node* fast){
        int cnt=1;
        fast= fast->next;
        while(slow!= fast){
            cnt++;
            fast= fast->next;
        }
        return cnt;
    }
    
    
    int lengthOfLoop(Node *head) {
        if(head== nullptr || head->next== nullptr) return 0;
        Node *slow=head, *fast=head;
        
        while(fast!=nullptr && fast->next!=nullptr){
            slow= slow->next;
            fast= fast->next->next;
            
            if(slow == fast){
              return length(slow,fast);   
            }
        }
        return 0;
    }
};