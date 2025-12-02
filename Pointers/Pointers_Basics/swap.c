//Swap two numbers using pointers
#include <stdio.h>

void swap(int* a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b;
    printf("Enter two numbers to be swapped\n");
    scanf("%d %d", &a, &b);
    swap(&a,&b);
    printf("The numbers are swapped with a and b as %d and %d respectively\n", a, b);
    return 0;
}
