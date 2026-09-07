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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode *itr= head;
        if(head==nullptr) return nullptr;
        while(itr!=nullptr){
            size+=1;
            itr= itr->next;
        }
        n= size-n;
        if(n==0){
            ListNode *temp=head;
            head= head->next;
            delete(temp);
            return head;
        }
        itr= head;
        ListNode* temp=nullptr;
        for(int i=0; i<n-1; i++){
            itr= itr->next;
        }
        if(n==size-1){
            delete(itr->next);
            itr->next= nullptr;
            return head;
        }
        temp= itr->next;
        itr->next= itr->next->next;
        delete(temp);
        return head;
    }
};