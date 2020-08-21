#include<stdio.h>
int main()
{
    int t;
    int m;
    int n; 
    int a[10000];
    int i,j;
    scanf("%d",&t);
    while(t!=0)
    {
      scanf("%d",&m);
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==m)
            {
                printf("%d %d\n",i+1,j+1);
            }
        }
      }
      t--;
    }

}
