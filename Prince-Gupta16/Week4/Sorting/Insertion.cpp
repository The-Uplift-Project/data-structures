#include <iostream>
using namespace std;

// Time complexity O(n*n)
// Space complexity O(1)

void insertionSort(int arr[], int n)
{

    // arr - input array
    // n - size of array
    int sp = 0;
    while (sp <= (n - 2))

    {
        int usp = sp + 1;
        int temp = arr[usp];
        int lv = sp;
        while (lv >= 0)
        {
            if (arr[lv] > temp)
                arr[lv + 1] = arr[lv];
            else
            {
                arr[lv + 1] = temp;
                break;
            }
            lv = lv - 1;
        }
        if (lv == -1)

        {
            arr[0] = temp;
        }
        sp++;
    }
}

int main()
{

    int size;
    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    insertionSort(input, size);

    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;
    return 0;
}