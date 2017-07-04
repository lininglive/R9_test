#include<stdio.h>

void Delay(unsigned int nDelay)
{
unsigned int i,j,k;
for ( i=0;i<nDelay;i++ )
for ( j=0;j<6144;j++ )
k++;
}

int main()
{
    int i,space,rows,k=0;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i)
    {
        for(space=1;space<=rows-i;++space)
        {
            printf(" ");
            Delay(10);
        }
        while(k!=2*i-1)
        {
            printf("*");
            ++k;
            Delay(10);
        }
        k=0;
        printf("\n");
    }
    return 0;
}