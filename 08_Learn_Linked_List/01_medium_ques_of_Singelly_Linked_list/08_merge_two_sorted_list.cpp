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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ans= new ListNode(),*itr=ans;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val >= list2->val){
                ListNode *temp= new ListNode(list2->val);
                itr->next= temp;
                itr= temp;
                list2= list2->next;
            }
            else if(list1->val < list2->val){
                ListNode *temp= new ListNode(list1->val);
                itr->next= temp;
                itr= temp;
                list1= list1->next;
            }
        }
        while(list1!=nullptr){
            ListNode *temp= new ListNode(list1->val);
            itr->next= temp;
            itr= temp;
            list1= list1->next;
        }
        while(list2!=nullptr){
            ListNode *temp= new ListNode(list2->val);
            itr->next= temp;
            itr= temp;
            list2= list2->next;
        }
    return ans->next;
    }
};