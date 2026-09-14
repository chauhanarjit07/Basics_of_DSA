
   struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
   };
  
class Solution {
    int sizell(ListNode* head){
        ListNode* temp= head;
        int cnt=0;
        while(temp!=nullptr){
            cnt++;
            temp= temp->next;
        }
        return cnt;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next== nullptr) return head;
         int size= sizell(head);
        ListNode* temp= head;
        while(temp->next!=nullptr){
            temp= temp->next;
        }
        temp->next= head;
        temp= head;

       
        int n= (k%size);
        n= size-n;
        for(int i=1; i<n; i++){
            temp= temp->next;
        }
        head= temp->next;
        temp->next= nullptr;
        return head;
    }
    
};