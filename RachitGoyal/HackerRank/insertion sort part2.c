#include<stdio.h>
int main()
{
    int n,i,j,temp,k,l,m;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
     temp=a[i];
     j=i-1;
    while(temp<=a[j]&& j>=0)
      {
        a[j+1]=a[j];
        j--;
      }
        a[j+1]=temp;
      
        for(m=0;m<n;m++)
        {
            printf("%d ",a[m]);
         }
      
        printf("\n");
    }

}
     
