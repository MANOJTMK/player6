#include<stdio.h>
void main()
{
    int n,a[100],i,j,m=0,c,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++)
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
