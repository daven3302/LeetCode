#include <vector>
#include <set>
#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums, int limit)
    {
        auto iterBegin = nums.begin();
        int result = 0;
        while(iterBegin != nums.end())
        {
            int length = 1;
            auto iterEnd = iterBegin + 1;
            cout << "iterBegin: " << *iterBegin << " iterEnd: " << *iterEnd << endl;
            while(iterEnd != nums.end())
            {
                auto cacheSet = multiset<int>(iterBegin, iterEnd);
                if(abs(*(prev(cacheSet.end(),1)) - *(cacheSet.begin())) <= limit)
                {
                    if(result < cacheSet.size())
                    {
                        result = cacheSet.size();
                    }
                }
                iterEnd++;
            }
            cout << "iterBegin: " << *iterBegin << " iterEnd: " << *prev(iterEnd,1) << endl;
            iterBegin++;
        }
        return result;
    }
};