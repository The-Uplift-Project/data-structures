
#include <iostream>
using namespace std;

// Time complexity O(n*n)
// Space complexity O(1)

void swap(int arr[], int a, int b)
{
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void selectionSort(int arr[], int n)
{

    // arr - input array
    // n - size of array
    int jc = 1;
    while (jc <= n)
    {
        int sp = jc - 1;
        int cp = sp + 1;
        while (cp <= n - 1)
        {
            if (arr[sp] > arr[cp])
            {
                swap(arr, sp, cp);
            }

            cp++;
        }

        jc++;
    }
}

int main()
{

    int size;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}