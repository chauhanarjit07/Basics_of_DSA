#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode *child;
    ListNode() {
        val = 0;
        next = NULL;
        child = NULL;
    }
    ListNode(int data1) {
        val = data1;
        next = NULL;
        child = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode* next2) {
        val = data1;
        next = next1;
        child = next1;
    }
};
//========================BRUTE FORCE+==========================
class Solution {
private:

    ListNode* convertArrToLinkedList(vector<int>& arr) {

        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

        for (int i=0; i < arr.size(); i++) {

            temp->child = new ListNode(arr[i]);
            

            temp = temp->child;
        }
        

        return dummyNode->child;
    }

public:

    ListNode* flattenLinkedList(ListNode* head) {
        vector<int> arr;


        while (head != nullptr) {
            ListNode* t2 = head;
            
            while (t2 != nullptr) {

                arr.push_back(t2->val);
                

                t2 = t2->child;
            }

            head = head->next;
        }
        sort(arr.begin(), arr.end());
        return convertArrToLinkedList(arr);
    }
};


void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->child;
    }
    cout << endl;
}

void printOriginalLinkedList(ListNode* head, int depth) {
    while (head != nullptr) {
        cout << head->val;


        if (head->child) {
            cout << " -> ";
            printOriginalLinkedList(head->child, depth + 1);
        }
        if (head->next) {
            cout << endl;
            for (int i = 0; i < depth; ++i) {
                cout << "| ";
            }
        }
        head = head->next;
    }
}















class Solution {
private:

    ListNode* merge(ListNode* list1, ListNode* list2){

        ListNode* dummyNode = new ListNode(-1);
        ListNode* res = dummyNode;
    

        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                res->child = list1;
                res = list1;
                list1 = list1->child;
            }
            else{
                res->child = list2;
                res = list2;
                list2 = list2->child;
            }
            res->next = NULL;
        }
    

        if(list1){
            res->child = list1;
        } else {
            res->child = list2;
        }
            if(dummyNode->child){
            dummyNode->child->next = NULL;
        }
        
        return dummyNode->child;
    }

public:

    ListNode* flattenLinkedList(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return head; // Return head
        }
        ListNode* mergedHead = flattenLinkedList(head->next);
        
        head = merge(head, mergedHead);
        return head;
    }
};


void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->child;
    }
    cout << endl;
}
