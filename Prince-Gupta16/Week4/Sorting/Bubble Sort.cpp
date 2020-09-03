#include <iostream>
using namespace std;


// Time complexity O(n*n)
// Space complexity O(1)


void swap(int arr[], int bp, int b)
{
    int temp;
    temp = arr[bp];
    arr[bp] = arr[b];
    arr[b] = temp;
}
void bubbleSort(int arr[], int n)
{
    //arr - input array
    //n - size of array
    int jc = 1;
    while (jc < n)
    {
        int bp = 0, bc = 1;
        while (bc <= n - jc)
        {
            if (arr[bp] > arr[bp + 1])
            {
                swap(arr, bp, bp + 1);
            }
            bc++;
            bp++;
        }
        jc++;
    }
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

    bubbleSort(input, size);

    for (int i = 0; i < size; ++i)
    {
        cout << input[i] << " ";
    }

    delete[] input;
    cout << endl;
    return 0;
}