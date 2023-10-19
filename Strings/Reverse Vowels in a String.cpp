#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isVowel(char s)
    {

        if (s == 'a' or s == 'A' or s == 'e' or s == 'E' or s == 'i' or s == 'I' or s == 'o' or s == 'O' or s == 'u' or s == 'U')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s)
    {

        // leetcode -> leotcede
        int i = 0;
        int j = s.size() - 1;

        while (i <= j)
        {
            if (isVowel(s[i]) and isVowel(s[j]))
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if (!isVowel(s[i]))
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        return s;
    }
};