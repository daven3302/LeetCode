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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
ListNode* compare(ListNode* a,ListNode* b);
int main()
{
    ListNode *a,*b;
    a = new ListNode(1);
    b = new ListNode(1);
    a->next = new ListNode(2);
    b->next = new ListNode(3);
    a->next->next = new ListNode(4);
    b->next->next = new ListNode(4);
    ListNode *ans = mergeTwoLists(a,b);
    while (ans!=nullptr)
    {
        cout << ans->val << " ";
        ans = ans->next;
    }
    cout << endl;
    return 0;

}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
{
    list<int>cache;
    while(list1!=nullptr)
    {
        cache.push_back(list1->val);
        list1 = list1->next;
    }
    
    while(list2!=nullptr)
    {
        cache.push_back(list2->val);
        list2 = list2->next;
    }
    //sort(cache.begin(),cache.end());
    cache.sort();
    list2 = list1 = new ListNode();
    for(auto p = cache.begin() ; p != cache.end() ; p++)
    {
        list1->next = new ListNode(*p);
        list1 = list1->next;
    }
    list1 = list2->next;
    return list1;
}