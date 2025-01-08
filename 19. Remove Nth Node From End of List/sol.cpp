#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
               ListNode* temp = new ListNode();
        temp->next = head;
        ListNode *toDelete = temp, *toEnd = temp;
        for(int i = 0; i < n+1; ++i){
            toEnd = toEnd->next;
        }
        while(toEnd){
            toDelete = toDelete->next;
            toEnd = toEnd->next;
        }
        ListNode* tmp = toDelete->next;
        toDelete->next = toDelete->next->next;
        delete tmp;
        return temp->next;
    }
};
