#include <stdio.h>
int main()
{
    int     firstNumber = 7;
    char    alp         = 'G';
    float   secondFloat = 1.66;
    double  dub         = 3.487288;
    char    name[]      = "Hi, How are you today?";
    int     sum;
    sum = sizeof(firstNumber)+sizeof(alp)+sizeof(secondFloat)+sizeof(dub)+sizeof(name);

//These are the output statements.

    printf("Today we will learn sizeof operator!\n");
    printf("Size of Integer\t\t\t\t: %zu bytes\n",sizeof(firstNumber));
    printf("Size of Char\t\t\t\t: %zu bytes\n",sizeof(alp));
    printf("Size of float\t\t\t\t: %zu bytes\n",sizeof(secondFloat));
    printf("Size of Double\t\t\t\t: %zu bytes\n",sizeof(dub));
    printf("Size of String\t\t\t\t: %zu bytes\n",sizeof(name));
    printf("The Total Memory Occupied is: %d",sum);

    return 0;
}