#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[] = {4, 7, 11, 5, 13, 2};
    int n = 6;

    int j;
    int count;
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                count++;
                break;
            }
        }
        if (count == 2)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[k] > arr[i] and arr[k] < arr[j])
                {
                    count++;
                    break;
                }
            }
        }

        if (count == 3)
            break;
    }

    if (count == 3)
        cout << "true";

    else
    {
        cout << "false";
    }

    return 0;
}