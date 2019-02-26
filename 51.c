#include<stdio.h>
void main()
{
    int n,a[100],i,j,m=0,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2;i++)
    {
        m=0;
        for(j=0;j<n;j++)
        {
            if(a[i]>m)
            {
                m=a[i];
                c=i;
            }
        }
        a[c]=0;
    }
    printf("%d",m);
    getch();
}
