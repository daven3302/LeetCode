class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int>cache;
        while(head != nullptr)
        {
            cache[head]++;
            if(cache[head] > 1)
                return head;
            head = head->next;
        }
        return nullptr;
    }
};