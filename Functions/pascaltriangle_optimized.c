#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of lines to be printed in the pascal's triangle\n");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int ncr=1;
        
        for(int j=0; j<=i; j++)
        {
            printf("%d ", ncr); //keeping this here makes all the difference, 
            //j=1 is calculated and stored in ncr as 0 but never printed as loop never makes to next iteration
            ncr = ncr * (i-j)/(j+1);
        }

        printf("\n");
    }
    return 0;
}
