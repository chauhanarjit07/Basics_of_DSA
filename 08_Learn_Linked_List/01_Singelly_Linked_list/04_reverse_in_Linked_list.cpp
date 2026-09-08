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
    //-------Itarative-----------------
    public:

    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode *temp= head, *front= head, *prev= nullptr;
        while(temp!=nullptr){
            front= temp->next;
            temp->next= prev;
            prev= temp;
            temp= front;
        }
        return prev;
    }
};

class Solution {
    //-------Recursive-----------------
    public:

    ListNode* reverse(ListNode *head){
        if(head==nullptr || head->next==nullptr) return head;

        else{
            ListNode* newhead= reverse(head->next);
            ListNode* front= head->next;
            front->next= head;
            head->next= nullptr;
            return newhead;
        }
    }
};


