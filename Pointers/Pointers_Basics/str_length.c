//Find the length of the string using pointers

#include<stdio.h>
#define MAXLIMIT 30

int getlen(char* arr)
{
    int i;
    for(i = 0; *(arr+i)!='\0'; i++);

    return i;
    
}

int main()
{ 
    char arr[MAXLIMIT];
    printf("Enter the string\n");
    scanf("%[^\n]s", arr); // fgets(arr, MAXLIMIT, stdin); different ways to fetch a string
    printf("Length of the array is %d\n", getlen(arr));
    printf("Entered arry is %s", arr);
    return 0;
}
