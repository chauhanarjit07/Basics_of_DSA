
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        Node* temp= headRef;
        
        while(temp!=nullptr && temp->next!=nullptr){
            Node* nextptr= temp;
            while(nextptr!= nullptr && nextptr->data== temp->data){
                nextptr= nextptr->next;
            }
            temp->next= nextptr;
            if(nextptr) nextptr->prev= temp;
            
            temp= temp->next;
        }
        return headRef;
        
    }
};