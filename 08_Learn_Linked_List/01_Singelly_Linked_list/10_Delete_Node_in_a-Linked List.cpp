#include<bits/stdc++.h>
using namespace std;
   struct ListNode {
       int val;
       ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *itr=node, *temp=node, *prev=nullptr;
        if(itr->next!=nullptr) itr= itr->next;
        while(itr!=nullptr){
            temp->val= itr->val;
            prev= temp;
            temp= temp->next;
            itr= itr->next;  
        }
        delete(temp);
        prev->next= nullptr;
    }
};
