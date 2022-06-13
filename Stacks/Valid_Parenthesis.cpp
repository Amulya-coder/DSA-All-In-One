// Problem link: https://leetcode.com/problems/valid-parentheses/
#include <bits/stdc++.h>

using namespace std;

// Note: order matters
int main()
{

    string s = "(){}[]{{}}";

    stack<char> st;

    bool flag = true;
    for (int i = 0; i < s.length(); i++)
    {

        if (st.empty())
        {
            if (s[i] == ')' or s[i] == ']' or s[i] == '}')
            {
                // cout<<"NO"<<endl;
                flag = false;
                break;
            }

            else if (s[i] == '(' or s[i] == '{' or s[i] == '[')
                st.push(s[i]);
        }
        else
        {
            if (s[i] == '(' or s[i] == '{' or s[i] == '[')
                st.push(s[i]);

            else if (s[i] == ')')
            {
                if (st.top() == '(')
                    st.pop();

                else
                {
                    // cout<<"NO"<<endl;
                    flag = false;
                    break;
                }
            }

            else if (s[i] == '}')
            {
                if (st.top() == '{')
                    st.pop();

                else
                {
                    // cout<<"NO"<<endl;
                    flag = false;
                    break;
                }
            }

            else if (s[i] == ']')
            {
                if (st.top() == '[')
                    st.pop();

                else
                {
                    // cout<<"NO"<<endl;
                    flag = false;
                    break;
                }
            }
        }
    }

    if (st.empty() and flag)
        cout << "YES valid parenthesis" << endl;

    else
        cout << "NO" << endl;

    return 0;
}