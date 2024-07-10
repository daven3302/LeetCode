#include <iostream>
#include "Solution.h"

int main()
{
    Solution solution;
    vector<string> logs = {"d1/","d2/","../","d21/","./"};
    cout << solution.minOperations(logs) << endl;
    return 0;
}