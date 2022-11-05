/*
Problem statement

At a restaurant, two types of dishes (A and B) are to be cooked. For this, the restaurant authority wants to hire
new chefs. There are few chefs who can prepare only dish A and few others can prepare only dish B. Some chefs
(represented as C) can prepare both dish A and dish B. The restaurant kitchen is small, and only one chef can work in
the kitchen at a time.
Consider N chefs, available to prepare dish A or dish B or both, along with the time Ti (i = 1,2,3....N) required by
i
th chef. The restaurant authority can either hire two chefs among N chefs to prepare dish A and B separately, or can
hire someone who can cook both A and B.
Write a program to find the minimum time Z required to prepare both of the dishes.
Read the input from STDIN and print the output to STDOUT. Do not write arbitrary strings while reading the input or
while printing, as these contribute to the standard output.
Constraints:
I) N >= 1
II) T >= 1
Input Format:
The first line of input contains N.
Next N lines of input contains a character (A, B or C) and T, separated by a single white space.
Output Format:
The output contains Z.
Sample Input1:
5
A 2
B 5
A 2
C 4
B 3
Sample Output1:
4
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<char> s(n);
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> v[i];
    }

    int min_A = INT_MAX;
    int min_B = INT_MAX;
    int min_C = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            min_A = min(min_A, v[i]);
        }
        else if (s[i] == 'B')
        {
            min_B = min(min_B, v[i]);
        }
        else if (s[i] == 'C')
        {
            min_C = min(min_C, v[i]);
        }
    }

    int sum = min_A + min_B;
    if (sum > min_C)
    {
        cout << min_C << endl;
    }
    else
    {
        cout << sum << endl;
    }

    return 0;
}