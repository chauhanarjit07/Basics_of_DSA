#include<bits/stdc++.h>
using namespace std;
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
}; 

class Solution {
    Node* last(Node* head){
        Node* temp= head;
        while(temp->next!=nullptr){
            temp= temp->next;
        }
        return temp;
    }
  public:
    vector<vector<int>> givenSumPairs(Node* head, int target) {
        Node* left=head,*right= last(head);
        vector<vector<int>>ans;
        
        while(left->data < right->data){
            long sum= left->data+right->data;
            if(sum<target) left= left->next;
            if(sum>target) right= right->prev;
            else if(sum==target){
                ans.push_back({left->data,right->data});
                left= left->next;
                right= right->prev;
            }
        }
        return ans;
        
    }
};