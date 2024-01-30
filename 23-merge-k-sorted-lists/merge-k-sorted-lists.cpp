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

class cmp{
    public:
        bool operator()(ListNode* a, ListNode* b){
            return a->val > b->val;
        }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>, cmp> pq;

        int k = lists.size();
        if(k == 0) return NULL;

        for(int i = 0; i < k; i++){
           if(lists[i]) pq.push(lists[i]);
        }

        ListNode* head = NULL;
        ListNode* tail = NULL;

        while(pq.size() > 0){
            ListNode* top = pq.top();
            pq.pop();

            if(top && top ->next){
                pq.push(top->next);
            }
            if(!head){
                head = top;
                tail = top;
            }
            else{
                tail->next = top;
                tail = tail->next;
            }
        }
        return head;

    }
};