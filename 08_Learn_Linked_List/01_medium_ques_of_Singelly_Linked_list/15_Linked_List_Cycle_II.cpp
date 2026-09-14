#include<bits/stdc++.h>
using namespace std;
   struct ListNode {
      int val;
       ListNode *next;
       ListNode(int x) : val(x), next(NULL) {}
   };



//---------------Brute Force---------------------------------  
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next== nullptr) return nullptr;
        map<ListNode*,int> mpp;
        ListNode* itr= head;
        
        while(itr!=nullptr){
            if(mpp.find(itr)!=mpp.end()){
                return itr;
            }
            mpp[itr]+=1;
            itr= itr->next;
        }
        return nullptr;
    }
//-------------------Optimal Approach-------------------------
     ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next== nullptr) return nullptr;
        map<ListNode*,int> mpp;
        ListNode* slow= head, *fast=head;
        
        while(fast!=nullptr && fast->next!=nullptr){
            slow= slow->next;
            fast= fast->next->next;
            if(slow == fast){
                slow= head;
                while(slow!=fast){
                    slow= slow->next;
                    fast= fast->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};