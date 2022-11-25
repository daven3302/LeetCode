#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) 
{
    list<int>cache;
    while(head != nullptr)
    {
        cache.push_back(head->val);
        head = head->next;
    }
    cache.reverse();
    ListNode *new_list;
    head = new_list = new ListNode;
    for(auto p = cache.begin() ; p != cache.end() ; p++)
    {
        new_list->next = new ListNode(*p);
        new_list = new_list->next;
    }
    head = head->next;
    return head;
}