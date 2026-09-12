class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

class Solution {
  public:
    Node* deleteAllOccurOfX(Node* head, int x) {
        
        Node* temp= head;
        
        while(temp!=nullptr){
            if(temp->data== x){
                
                Node* newnode= temp->next;
                Node* prevnode= temp->prev;
                if(temp==head){head= newnode;}
                
                if(newnode) newnode->prev= prevnode;
                if(prevnode) prevnode->next= newnode;
                
                delete temp;
                
                temp= newnode;
                
            }
            else temp= temp->next;
        }
        return head;
        
    }
};