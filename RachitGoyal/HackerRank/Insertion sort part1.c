#include<stdio.h>
int main()
{
    int v,i;
    int n,a[1000];
    scanf("%d",&v);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==v)
        {
            printf("%d",i);
            break;
        }
    }
}
