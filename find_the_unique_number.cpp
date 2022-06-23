// Find the unique numbers
// Input: 20 40
// Output: 19
// Note: Unique numbers are those which have different units digit for ex: 20,21
// 22 and 33 are not
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int lower, higher;
    cin >> lower >> higher;

    int count = (higher - lower) / 10;
    int unique_count = (higher - lower) + 1 - count;
    cout << unique_count << endl;

    return 0;
}