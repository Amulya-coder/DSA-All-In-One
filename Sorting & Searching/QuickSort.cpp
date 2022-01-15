#include <bits/stdc++.h>

using namespace std;

//Here what partition do is it will placed the pivot element at correct position in array and return the index

//Worst-case Time Complexity of Quick Sort is O(N^2)
//Best-case Time Complexity of Quick Sort is O(n logn)
//Algorithm of partition
int partition(int arr[], int l, int r)
{

    int pi = arr[r]; //making last element as pivot;

    //pointer i--> denoting the last number which is less than pivot
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (arr[j] < pi)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]); //Placing the pivot at correct position by swapping the pivot with element at i+1 and return i+1

    return i + 1; //this will give the correct position pf pivot element
}

void quickSort(int arr[], int l, int r)
{

    if (l < r) //when l==r ho jayega means ham last element pe honge toh phir ham return kar jayenge

    {

        //Yaha pe pi is pivot ka pointer yeh voh element hai jisse choose karke ham uski sahi position pe daal rahe honge
        //In short pi is the index of pivot element
        int pi = partition(arr, l, r);

        //Ham yaha pe pivot last element lenge then we perform partition around pivot
        //After partition all the elements greater than pivot comes in right side and the elements lesser than the pivot comes on
        //the left side

        //but the elements comes on the left or in right side after partition are not sorted in itself so we calling quicksort again
        quickSort(arr, l, pi - 1); //why pi-1 because joh pivot ka element hoga voh toh apni correct position pe dale chuke honge so usse include karne ki jarurut nahi hai
        quickSort(arr, pi + 1, r);
    }
}

int main()
{

    int arr[] = {5, 10, 2, 3, 19};

    quickSort(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}