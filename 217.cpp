#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool containsDuplicate(vector<int>& nums);

int main()
{
    vector<int> input = {1,1,1,3,3,4,3,2,4,2};
    cout << containsDuplicate(input) << endl;
    return 0;
}

bool containsDuplicate(vector<int>& nums) 
{
    map<int,int>count;
    for(vector<int>::iterator p = nums.begin() ; p != nums.end() ; p++)
        count[*p]++;
    for(map<int,int>::iterator p = count.begin() ; p != count.end() ; p++)
    {
        if(p->second > 1)
            return true;
    }
    return false;
}