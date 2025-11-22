#include<stdio.h>
#include<stdlib.h>

int factorial(int);

int factorial(int a)
{
    int res=1;
    for(int i = a; i > 1; i--)
    {
        res *= i;
    }

    return res;
}
int main()
{
    int n, r, nfact, rfact, nrfact, res;
    printf("Enter the values of n and r\n");
    scanf("%d %d", &n, &r);
    if(n>0 && r>0)
    {
        if(n==r)
        {
            res = 1;
            printf("The result is %d\n", res);
        }
        else if(n>r)
        {
            nfact = factorial(n);
            rfact = factorial(r);
            nrfact = factorial(n-r);

            res = nfact / (rfact*nrfact);
            printf("The result is %d\n", res);
        }
        else
        {
            printf("Invalid inputs!!!!!!\n");
            exit(1);
        }
    }
    else
        printf("Invalid inputs!!!!!!\n");
        exit(1);


    return 0;
}
