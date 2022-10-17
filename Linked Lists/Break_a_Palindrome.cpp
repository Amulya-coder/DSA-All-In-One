#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string breakPalindrome(string s)
    {
        // aaaaab
        int ptr2 = 0;

        string temp = "";
        for (int i = 0; i < s.length(); i++)
        {
            temp += 'a';
        }
        string ans = "";

        if (s.length() == 1)
        {
            return ans;
        }
        bool flag = false;
        int n = s.length();

        int a = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a')
            {
                a++;
            }
        }

        // edge case
        while (a == n - 1 and s[n / 2] != 'a')
        {
            s[n - 1] = 'b';
            return s;
        }

        while (ptr2 < s.length())
        {
            if (s[ptr2] <= temp[ptr2])
            {
                ans += s[ptr2];
            }
            else if (s[ptr2] > temp[ptr2])
            {
                ans += temp[ptr2];
                flag = true;
                break;
            }
            ptr2++;
        }

        if (flag == true)
        {
            for (int i = ptr2 + 1; i < s.length(); i++)
            {
                ans += s[i];
            }
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                ans.erase(n - 1);
            }
            ans += 'b';
        }
        return ans;
    }
};