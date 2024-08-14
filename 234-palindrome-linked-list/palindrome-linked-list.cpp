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
    vector<int> listtoarray(ListNode* head){
        vector<int>arr;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        return arr;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return false;
        }
        vector<int>arr=listtoarray(head);
        int s=0;
        int e=arr.size()-1;
        while(s<e){
        if(arr[s]==arr[e]){
            s++;
            e--;
        }else{
            return false;
        }
        }
        return true;
    }
};