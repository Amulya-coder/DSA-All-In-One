// Link: https://www.hackerrank.com/challenges/cpp-sets/problem

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    cin >> t;

    set<int> s;

    while (t--)
    {

        int type;
        cin >> type;

        if (type == 1)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        else if (type == 2)
        {
            int x;
            cin >> x;
            s.erase(x);
        }
        else
        {
            int x;
            cin >> x;

            auto i = s.find(x);
            if (i != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}