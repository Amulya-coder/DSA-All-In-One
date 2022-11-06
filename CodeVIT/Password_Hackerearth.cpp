#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(char s1[], char s2[])
{
    int n = strlen(s1);

    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[n - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    char s[n][100];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (isPalindrome(s[i], s[j]))
            {
                cout << strlen(s[i]) << " " << s[i][strlen(s[i]) / 2];
            }
        }
    }

    return 0;
}