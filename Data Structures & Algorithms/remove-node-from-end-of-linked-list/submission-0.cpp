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
        ListNode* curr=head;
        int count=0;
        while(curr!=nullptr){
            curr=curr->next;
            count++;

        }
       // cout<<count;
        count=count-n;
        curr=head;
        if(count==0){
             head=head->next;
             delete curr;
            //return nullptr;
        }
        else{
            for(int i=0;i<count-1;i++){
                curr=curr->next;
            }
             ListNode*temp =curr->next;
             curr->next=curr->next->next;
             delete temp;
        }
        return head;
    }
};
