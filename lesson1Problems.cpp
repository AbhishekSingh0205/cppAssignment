#include <bits/stdc++.h>
using namespace std;
void sortDescending(int arr[], int n)
{
    // Your code here
}

int numDistinct(vector<int> arr)
{
    // Your code here
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