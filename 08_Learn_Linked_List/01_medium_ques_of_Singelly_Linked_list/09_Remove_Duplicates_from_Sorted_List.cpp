#include<bits/stdc++.h>
using namespace std;
    struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
   };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return nullptr;
        ListNode *ans= new ListNode(INT_MIN),*itr= ans;
        while(head!=nullptr){
            if(head->val != itr->val){
                ListNode *temp= new ListNode(head->val);
                itr->next= temp;
                itr= temp;
                head= head->next;
            }
            else head= head->next;
        }
        return ans->next;
    }
};