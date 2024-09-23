# Soring - Lesson 1

In C++, you can sort an array or a vector by calling the `sort()` function from the Standard Template Library (STL).

```
int arr[] = {5, 3, 6, 2}
int n = sizeof(arr)/sizeof(arr[0]);
sort(arr, arr + n);  // Sorts the array in ascending order
for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
// output : 2 3 5 6
```

The `sort()` function sorts the elements in-place and returns no value. By default, the array is sorted in ascending order.
`sort()` is present in `<algorithm>` header file.

To sort the array in descending order we can use `reverse()` method provided by STL container.

```
int arr[] = {5, 3, 6, 2}
int n = sizeof(arr)/sizeof(arr[0]);
sort(arr, arr + n);  // Sorts the array in ascending order
reverse(arr, arr+n); // Reverse the array
for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
// output : 6 5 3 2
```

To sort in descending order, you can also use a custom comparator like `greater<int>()`.
Do not worry we are going learn custom comparator function in upcoming lessons.

```
int arr[] = {5, 3, 6, 2, 1};
int n = sizeof(arr)/sizeof(arr[0]);
sort(arr, arr + n, greater<int>());  // Sorts in descending order
for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}

// Output : 6 5 3 2 1
```

STL containers like `vector<int>` are sorted with the help of iterators.

```
vector<int> arr = {5, 3, 6, 2, 1};
sort(arr.begin(), arr.end(), greater<int>());  // Sorts in descending order
for(int i = 0; i < n; i++) {
    cout << arr[i]<<" ";
}

// Output : 6 5 3 2 1
```

## Challenge Problems :

Implement the following functions :

1. `sortDescending( int arr[], int n )` -> This function accepts an array `arr` of size `n` and print the sorted array in descending order. This function does not return any thing.
2. `numDistinct(vector<int> arr)` -> This function accepts a `vector<int>` and returns the number of distinct integers in the vector.

## Time and Space Complexity
1. Time Complexity : The ```sort()``` function uses an algorithm with a time complexity of ```O(n log n)```, where ```n``` is the number of elements in the array or vector.
2. Space Complexity : The space complexity is typically ```O(1)``` as sorting is done in-place. However, if you are using a vector of objects, it could require additional space.
