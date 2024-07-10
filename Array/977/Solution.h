#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> results;
        for(auto p:nums)
            results.push_back(pow(p,2));
        sort(results.begin(),results.end());
        return results;
    }

};