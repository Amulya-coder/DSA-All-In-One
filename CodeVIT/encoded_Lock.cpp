/*
At "YoursPay" bank, the customer bank lockers use a digital lock. The digital lock is encoded in numeric form. To decode the lock there are two methods. If the lock is encoded by an armstrong number, then the decoding number is the sum of the even digits of the encoded number. If the encoded number is not an armstrong number, then the decoding number is the sum of the odd digits of the encoded number. An armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits in the number.

Write an algorithm to decode the digital lock

Note

0 is considered as an even digit and 1 is considered as an odd digit.

Example

Input

407

Output

4

Since 407 is an armstrong number, the sum of an even digit is 4.



Input format
The input is a long integer - encodedLock representing the numeric value of the encoded digital lock.

Output format
Print an integer representing the decoding number for the encoded digital lock.

Code constraints
0 < encodedLock <= 109

0 is considered as an even digit and 1 is considered as an odd digit.

Sample testcases
Input 1
153
Output 1
0
Input 2
372
Output 2
10
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int encode;
    cin >> encode;

    int n = encode;
    int power = 0;
    while (n)
    {
        power++;
        n = n / 10;
    }

    n = encode;

    int sum = 0;
    while (n)
    {
        int r = n % 10;
        sum += (r ^ power);
        n = n / 10;
    }

    int ans = 0;
    if (sum == encode)
    {

        while (encode)
        {
            int r = encode % 10;
            if (r % 2 == 0)
            {
                ans += r;
            }
            encode = encode / 10;
        }
    }

    else
    {
        while (encode)
        {
            int r = encode % 10;
            if (r % 2 != 0 or r == 1)
            {
                ans += r;
            }
            encode = encode / 10;
        }
    }

    cout << ans << endl;
}