//Copy a string using pointers

#include<stdio.h>
#define MAXLIMIT 40 // C is a case sensitive language

void strcopy(char* arr1, char* arr2)
{
    while(*arr1 != '\0')
    {
        *arr2++ = *arr1++;
    }
    *arr2 = '\0'; // Important else a garbage val is copied as the func due to the logic of while condition
}

int main()
{
    char arr1[MAXLIMIT], arr2[MAXLIMIT];
    printf("Enter the string to be copied\n");
    scanf("%[^\n]", arr1); //no need for s
    strcopy(arr1,arr2);
    printf("The two arrays now are: %s is original and %s is the copy\n", arr1, arr2);
    return 0;
}
