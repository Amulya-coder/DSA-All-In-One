/*
Problem statement

 The children's toy-making company "ToysFun" is building cubic-shaped learning toys. The company has a list of N dimensions suggested by its designers but they wish to choose only those dimensions for the toys that are perfect cube numbers. To do this, they need to know the total count of perfect cube numbers present in the list of dimensions.

Write an algorithm to help the toy manufacturers find the total count of perfect cube numbers present in the list of dimensions.

Example

Input

9

23 1 8 56 27 67 64 125 232

Output

5

Explanation

The cube numbers are 1, 8, 27, 64, 125. Hence the output is 5.

Input format
The first line of input consists of an integer - numDimensions representing the total number of dimensions selected by the designers (N).

The second line of input consists of N space-separated integers - dimens1, dimens2, ...... dimensN-1 representing the value of the dimensions selected by the designers.

Output format
Print an integer value representing the total count of the dimensions that are perfect cube numbers.



Code constraints
0 < numDimensions <= 1000000

0 < dimensi < 100000

0 <= i < numDimensions

Sample testcases
Input 1
9
23
1
8
56
27
67
64
125
232
Output 1
5
Input 2
5
23
1
8
56
27
Output 2
3

*/

#include <bits/stdc++.h>

using namespace std;

bool is_Perfect_cube(int n)
{

    int i = 1;
    while (i <= n)
    {
        if (i * i * i == n)
        {
            return true;
        }
        i++;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    int dimensions[n];
    for (int i = 0; i < n; i++)
    {
        cin >> dimensions[i];
    }

    int perfect_cube = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_Perfect_cube(dimensions[i]))
        {
            perfect_cube++;
        }
    }

    cout << perfect_cube << endl;
    return 0;
}
