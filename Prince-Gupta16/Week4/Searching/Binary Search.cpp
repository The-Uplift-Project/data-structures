#include <iostream>
using namespace std;

// Time Complexity  O(log n)
// Space Complexity O(1)




int binarySearch(int arr[], int n, int val)
{
    // arr - input array
    // n - size of array
    // val - element to be searched
    int low = 0, high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == val)
            return mid;
        else if (arr[mid] < val)
            low = mid + 1;
        else if (arr[mid] > val)
            high = mid - 1;
    }
    return -1;
}

int main()
{

    int size;
    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> input[i];
    }
    int val;
    cin >> val;
    cout << binarySearch(input, size, val) << endl;  

    delete[] input;
    return 0;
}