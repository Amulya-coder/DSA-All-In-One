/*
        *
      * * *
    * * * * *
  * * * * * * *
 */

// Optimise in Time Complexity of O(n)

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        int length = (2 * i) + 1;
        string str(length, '*');
        int spaces=(n-i-1);
        cout<<spaces<<str<<endl;
    }
}