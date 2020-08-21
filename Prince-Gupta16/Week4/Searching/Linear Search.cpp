#include <iostream>
using namespace std;

// Time Complexity  O(n)
// Space Complexity O(1)




int LinearSearch(int arr[], int n, int val)
{
    // arr - input array
    // n - size of array
    // val - element to be searched
    
    for(int i=0;i<n;i++){
         if(arr[i]==val)
           return i ;

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
        cout<<"Element found at index ";
        cout << LinearSearch(input, size, val) << endl;
    
    delete[] input;
    return 0;
}