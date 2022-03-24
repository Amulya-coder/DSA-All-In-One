#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool ispar(string x)
    {
        stack<char> st;
        bool ans = true;

        for (int i = 0; i < x.length(); i++)
        {

            if (x[i] == '{' or x[i] == '(' or x[i] == '[')
            {
                st.push(x[i]);
            }

            else if (x[i] == '}')
            {
                if (!st.empty() and st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    ans = false;
                }
            }
            else if (x[i] == ')')
            {
                if (!st.empty() and st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    ans = false;
                }
            }

            else if (x[i] == ']')
            {
                if (!st.empty() and st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    ans = false;
                }
            }
        }
        if (!st.empty())
        {
            return false;
        }

        return ans;
    }
};

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
}