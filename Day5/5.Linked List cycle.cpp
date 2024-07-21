#include<bits/stdc++.h>
using namespace std;


//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;

            if(fast==slow)return true;
        }
        
        return false;
    }
};