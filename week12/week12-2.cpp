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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // ListNode* ans = list1;
        //ListNode* ans = new ListNode(99);
        // 3.新增1個值是99且右邊又新增一個值是90
        ListNode* ans = new ListNode(99, new ListNode(88));
        return ans;
    }
};
