#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string findLongestWord(string s, vector<string> &s2)
    {
        vector<string> v;
        string result = "";
        for (int k = 0; k < s2.size(); k++)
        {
            string s1 = s2[k];
            int i = 0, j = 0;

            while (i < s.length())
            {
                if (s[i] == s1[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    i++;
                }
            }

            if (j == s1.length())
            {
                if (result.length() < s1.length())
                {
                    result = s1;
                }
                else if (result.length() == s1.length())
                {
                    result = result < s1 ? result : s1;
                }
            }
        }

        return result;
    }
};