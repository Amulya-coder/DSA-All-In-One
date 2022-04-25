/*GFG POTD
Given two numbers L and R (inclusive) find the product of primes within this range. Print the product modulo 109+7. If there are no primes in that range you must print 1.

Example 1:

Input: L = 1, R = 10
Output: 210
Explaination: The prime numbers are
2, 3, 5 and 7.
Example 2:

Input: L = 1, R = 20
Output: 9699690
Explaination: The primes are 2, 3,
5, 7, 11, 13, 17 and 19.

Expected Time Complexity: O((R-L)*(logR))
Expected Auxiliary Space: O(sqrt(R))

Constraints:
1 ≤ L ≤ R ≤ 109
0 ≤ L - R ≤ 106
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    long primeProduct(long int l, long int r)
    {

        // Using Sieve of Eratosthenes
        vector<bool> prime(r + l);
        long long product = 1;
        long int MOD = 1e9 + 7;

        for (long int i = 2; i * i <= r; i++)
        {
            if (!prime[i])
            {
                for (long int j = 2; j * i <= r; j++)
                {
                    prime[i * j] = true;
                }
            }
        }
        for (long int i = l; i <= r; i++)
        {
            if (!prime[i])
            {
                product = (product * i) % MOD;
            }
        }
        return product;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long L, R;
        cin >> L >> R;

        Solution ob;
        cout << ob.primeProduct(L, R) << "\n";
    }
    return 0;
}