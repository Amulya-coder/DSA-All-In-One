/*
You are given a string number representing a positive integer and a character digit.

Return the resulting string after removing exactly one occurrence of digit from number such that the value of the resulting string in decimal form is maximized. The test cases are generated such that digit occurs at least once in number.



Example 1:

Input: number = "123", digit = "3"
Output: "12"
Explanation: There is only one '3' in "123". After removing '3', the result is "12".
Example 2:

Input: number = "1231", digit = "1"
Output: "231"
Explanation: We can remove the first '1' to get "231" or remove the second '1' to get "123".
Since 231 > 123, we return "231".
*/
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string removeDigit(string number, char digit)
    {

        string ans = "";
        for (int i = 0; i < number.size(); i++)
        {
            if (number[i] == digit)
            {
                string temp = number.substr(0, i) + number.substr(i + 1);
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};

int main()
{
    string num;
    cin >> num;

    int digit;
    cin >> digit;

    Solution obj;
    cout << obj.removeDigit(num, digit) << endl;
}