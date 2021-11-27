#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int last = arr[n - 1];
    int j;

    for (j = n - 1; j > 0; j--)
    {
        arr[j] = arr[j - 1];
    }

    arr[0] = last;

    for (j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}
