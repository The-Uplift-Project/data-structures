#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>



void insertionSort(int N, int arr[]) {
    int i,j;
    int value;
    for(i=1;i<N;i++)
    {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<=arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=value;
    }
}
void insertionSort(int N,int arr[]);
int main() {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
}
