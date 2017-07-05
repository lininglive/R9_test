#include <stdio.h>
int main()
{
    int count,n,t1=0,t2=1,disp=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: %d+%d+",t1,t2);
    count = 2;
   
    printf("int main the loop staring!\n");
    while(count<n)
    {
        disp=t1+t2;
        t1=t2;
        t2=disp;
        ++count;
        printf("%d+",disp);
    }
    
    return 0;
}
