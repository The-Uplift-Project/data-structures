#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,d;
    scanf("%d %d",&n,&d);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if((i-d)>=0)
       { b[i-d]=a[i];}
       else
       
        
        
        b[n-d+i]=a[i];
        
        

    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;

}
