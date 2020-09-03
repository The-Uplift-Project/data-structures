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
    int a[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0,max=-65;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>max)
            max=sum;
        }
    }
    printf("%d\n",max);
}
