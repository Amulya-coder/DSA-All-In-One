#include <iostream>

using namespace std;

char ascii_code(int n)
{

    int rem, sum = 0;

    while (n != 0 or sum > 26)
    {

        if (sum > 26)
        {
            n = sum;
            sum = 0;
        }

        rem = n % 10;
        sum += rem;
        n = n / 10;
    }

    // A-65, a-97
    return (char)(sum + 64);
}

int main()
{
    int n;
    cin >> n;

    cout << ascii_code(n);
    return 0;
}