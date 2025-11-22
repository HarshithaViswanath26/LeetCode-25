#include<stdio.h>
int factorial(int);
int combination(int, int);

int factorial(int a)
{
    int res=1;
    for(int i = 2; i <= a; i++)
        res*=i;
    return res;
}

int combination(int n, int r)
{
    
    return factorial(n) / (factorial(r) * factorial(n-r));
    
}

int main()
{
    int n;
    printf("Enter the number of lines to be printed in the Pascal's triangle\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int r = 0; r <= i; r++)
        {
            printf("%d ", combination(i,r));
        }
        printf("\n");
    }
    return 0;
}
