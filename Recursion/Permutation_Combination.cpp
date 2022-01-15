#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int fact = factorial(n - 1);

    return (n * fact);
}

int permutation(int n, int r)
{

    int permutute = factorial(n) / factorial(n - r);

    return permutute;
}

int combination(int n, int r)
{
    int combine = factorial(n) / (factorial(r) * factorial(n - r));
    return combine;
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << permutation(n, r) << endl;
    cout << combination(n, r) << endl;
    return 0;
}