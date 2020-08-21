#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int select(int arr[], int i);
 
// A function to implement bubble sort
void selectionSort(int arr[], int n)
{
   int i, j;
   for (i = n-1; i >=0; i--)      
   {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
   }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}// } Driver Code Ends
/* The task is to complete select() which is used 
   as shown below to implement selectionSort() 
 
A function to implement selection sort
void selectionSort(int arr[], int n) {
   int i, j;
   for (i = n-1; i >=0; i--)     {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
   }
}  */

int select(int arr[], int i)
{
    // Your code here 
    int max=arr[i];
    int k,j=i;
    for(k=0;k<i;k++)
    {
        if(arr[k]>max)
        {
            max=arr[k];
            j=k;
        }
    }
    return j;
}

//Space Complexity: O(1)
//Time Complexity:-
//Worst Case: O(n^2)
//Best Case: O(n^2)
