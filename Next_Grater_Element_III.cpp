#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int nextGreaterElement(int n)
    {

        int max_ans = INT_MAX;

        string s1 = to_string(n);
        string s2 = s1;
        string s3 = to_string(max_ans);

        // O(n) time complexity
        next_permutation(s2.begin(), s2.end());
        if (s1 >= s2 or (s2.length() == s3.length() and s2 > s3))
        {
            return -1;
        }

        return stoi(s2);
    }
};