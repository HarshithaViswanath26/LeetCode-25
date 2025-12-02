// Usage of pointers: basics

#include <stdio.h>

int main()
{
    int a = 1;
    int* p = &a;
    
    printf("The address stored in the pointer is %x\n", p);
    printf("Dereferencing the ptr to fetch value %d\n", *p);
    printf("The address of the ptr is %x", &p);
    return 0;
}
