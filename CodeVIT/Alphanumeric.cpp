#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (!isdigit(s[i]))
            {

                char c = s[i];
                int pos = c - 65;
                cout << pos;
            }
        }
        cout << endl;
    }

    return 0;
}