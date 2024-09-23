#include <bits/stdc++.h>
using namespace std;
void sortDescending(int arr[], int n)
{
    sort(arr, arr + n);    // sort the arr
    reverse(arr, arr + n); // reverse the array to make it in descending order
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int numDistinct(vector<int> arr)
{
    int n = arr.size();
    int distinctCount = 1; // First element is always distinct
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            distinctCount++;
        }
    }
    return distinctCount;
}

int main()
{

    // Task 1
    int arr[4] = {5, 9, 2, 18};
    sortDescending(arr, 4); // Prints the array in descendig order

    // Task 2
    vector<int> arr2 = {5, 18, 2, 5, 9, 17, 5, 15, 2, 18};
    int result = numDistinct(arr2); // Returns the number of distinct elements in arr2
    cout << result << endl;
}