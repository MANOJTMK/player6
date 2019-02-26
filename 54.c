#include<stdio.h>
void main()
{
    char a[10000],b[10000];
    int n,m,i,l=0;
    scanf("%[^\n]%[^\n]",a,b);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;b[i]!='\0';i++)
    m=i;
    if(m==n)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
               l++; 
            }
        }
    }
    if(l==m)
    printf("yes");
    else
    printf("no");
    getch();
}
