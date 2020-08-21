#include<stdio.h>
    void insert_sort(int arr[],int n);
    int main()
    {  
     int arr[1001],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    insert_sort(arr,n);
    }
    
    void insert_sort(int arr[],int n)
   {
    int i,j,temp;
    int k=0;
    for(i=1;i<n;i++)
    {
    temp=arr[i];
    j=i-1;
    while(temp<arr[j]&& j>=0)
    {
    arr[j+1]=arr[j];
    j--;
    k++;
    }
    arr[j+1]=temp;
    }
    printf("%d",k);
    }
