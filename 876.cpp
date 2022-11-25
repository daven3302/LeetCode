#include <iostream>
#include <vector>
using namespace std;
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head)
{
    vector<int>cache;
    while(head != nullptr)
    {
        cache.push_back(head->val);
        head = head->next;
    }
    int s = cache.size() /2;

    ListNode *new_list;
    head = new_list = new ListNode;
    for(int i = s ; i < cache.size() ; i++)
    {
        new_list->next = new ListNode(cache[i]);
        new_list = new_list->next;
    }
    head = head->next;
    return head;
}