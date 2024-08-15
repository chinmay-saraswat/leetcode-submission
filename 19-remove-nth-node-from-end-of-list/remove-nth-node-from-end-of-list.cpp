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
    ListNode* reverse(ListNode* head){
       ListNode* curr=head;
       ListNode* prev=NULL;
       ListNode* next=NULL;
       while(curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
       } 
       return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return NULL;
        }

        ListNode* Head=reverse(head);
         if (n == 1) {
            ListNode* newHead = Head->next;
            delete Head;
            return reverse(newHead);
        }
        int count = 1;
        ListNode* curr=Head;
        ListNode* prev=NULL;
        while(curr!=NULL){
            if(count==n){
                prev->next=curr->next;
                delete curr;
                break;
            }else{
                prev=curr;
                curr=curr->next;
                count++;
            }
        }
        return reverse(Head);
    }
};