
//Practice question

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    int x,y,z;
    int s1,s2;
    s1 = 0;
    s2 = 0;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&x,&y,&z);
    if(a>x)
    {
        s1++;
    }
    if(x>a)
    {
        s2++;
    }
    if(b>y)
    {
        s1++;
    }
    if(y>b)
    {
        s2++;
    }
    if(c>z)
    {
        s1++;
    }
    if(z>c)
    {
        s2++;
    }
    printf("%d %d\n",s1,s2);
}
