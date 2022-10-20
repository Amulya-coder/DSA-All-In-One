#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {

        string value[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int symbol[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        int i = 0;
        string result = "";
        while (num != 0)
        {

            if (num >= symbol[i])
            {
                result += value[i];
                num -= symbol[i];
            }
            else
            {
                i++;
            }
        }
        return result;
    }
};