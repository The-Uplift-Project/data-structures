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
    int n,q;
    scanf("%d",&n);
    char a[n][20];
    for(int i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    scanf("%d",&q);
    char b[q][20];
    for(int i=0;i<q;i++)
    {
        scanf("%s",&b[i]);
    }
    
    for(int i=0;i<q;i++)
    {int k=0,sum=0;
        while(k<n)
        {
            if(strcmp(b[i],a[k])==0)
            sum++;
            k++;
        }
        printf("%d\n",sum);
        
    }

}
