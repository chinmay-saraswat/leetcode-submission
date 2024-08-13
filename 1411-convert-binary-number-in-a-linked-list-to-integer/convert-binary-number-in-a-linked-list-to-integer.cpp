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
    int getDecimalValue(ListNode* head) {
        ListNode* t = head;
        string s = "";
        int number;
        while (t != NULL) {
            s += to_string(t->val);
            t = t->next;
        }
        number = stoi(s, NULL, 2);
        return number;
    }
};