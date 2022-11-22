#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);

int main()
{
    vector<int>n1,n2;
    n1 = {1,2,3,0,0,0};
    n2 = {2,5,6};
    merge(n1,3,n2,3);
    for(int i = 0 ; i < n1.size() ; i++)
        cout << n1[i] << " ";
    cout << endl;
    return 0;
}
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    vector<int>cache;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    cache.insert(cache.begin(),nums1.begin()+(nums1.size()-m),nums1.end());
    cache.insert(cache.begin(),nums2.begin()+(nums2.size()-n),nums2.end());
    nums1 = cache;
    sort(nums1.begin(),nums1.end());
}

