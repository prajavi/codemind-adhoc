#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;n>=i;i--)
    {
        for(j=1;i>=j;j--)
        {
            printf("*");
        }
        printf("
");
    }
}