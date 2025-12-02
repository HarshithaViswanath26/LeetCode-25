//Print an array using pointers

#include <stdio.h>
#define MAXLIMIT 30

int main()
{
    char arr[MAXLIMIT];
    char* ptr = arr;
    printf("Enter the array\n");
    fgets(arr, MAXLIMIT, stdin);
    
    printf("The entered array is\n");
    
    while(*ptr!='\0')
    {
        printf("%c", *ptr++);  //Format specifier for char
    }
    return 0;
}
