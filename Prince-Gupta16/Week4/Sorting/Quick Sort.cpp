#include <iostream>
using namespace std;

// Time complexity O(log n)
// Space complexity O(1)

int partition(int *arr, int si, int ei)
{
    int ep = arr[ei];
    int low = si;
    int var = si;
    while (var < ei)
    {
        if (arr[var] < ep)
        {
            int t = arr[var];
            arr[var] = arr[low];
            arr[low] = t;
            var++;
            low++;
        }
        else
            var++;
    }
    int t = arr[var];
    arr[var] = arr[low];
    arr[low] = t;
    return low;
}
void helper(int arr[], int size, int low, int high)
{
    if (low >= high)
        return;
    int positionindex = partition(arr, low, high);
    helper(arr, size, low, positionindex - 1);
    helper(arr, size, positionindex + 1, high);
}
void quickSort(int input[], int size)
{
    int low = 0, high = size - 1;
    helper(input, size, low, high);
    return;
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    quickSort(input, n);
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;
}
