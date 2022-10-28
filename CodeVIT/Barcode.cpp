/*
Problem Statement

The cosmetic company "BeautifyMe" wishes to know the alphabetic product code from the product barcode. The barcode of the product is a numeric value and the alphabetic product is a string value tagged 'a-j'. The alphabetic range 'a-j' represents the numeric range '0-9'. To produce the alphabetic product code, each digit in the numeric barcode is replaced by the corresponding matching letters.

Write an algorithm to display the alphabetic product code from the numeric barcode.

Input format
The input consists of an integer - barcode, that represents the barcode of the product.

Output format
Print a string representing the alphabetic product code.

Code constraints
0 <= barcode <= 10000000000

Sample testcases
Input 1
12403
Output 1
bcead
Input 2
7204
Output 2
hcae
*/

#include <bits/stdc++.h>

using namespace std;

string alphabeticeCode(int n, char arr[])
{

    string result = "";

    while (n)
    {

        int r = (int)(n % 10);
        result = arr[r] + result;
        n = n / 10;
    }

    return result;
}

int main()
{

    int barcode;
    cin >> barcode;

    char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    string res = alphabeticeCode(barcode, alphabets);

    cout << res;
    return 0;
}