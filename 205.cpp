#include <iostream>
#include <string>
#include <map>
using namespace std;

bool isIsomorphic(string s, string t);

int main()
{
    string s = "bbbaaaba";
    string t = "aaabbbba";
    cout << isIsomorphic(s,t) <<endl;
    return 0;
}

bool isIsomorphic(string s, string t) 
{   
    map<char,char>check_s,check_t;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(check_s.find(s[i]) == check_s.end())
            check_s[s[i]] = t[i];
        else
        {
            if(t[i] != check_s[s[i]])
                return false;
        }

        if(check_t.find(t[i]) == check_t.end())
            check_t[t[i]] = s[i];
        else
        {
            if(s[i] != check_t[t[i]])
                return false;
        }
    }
    return true;
}