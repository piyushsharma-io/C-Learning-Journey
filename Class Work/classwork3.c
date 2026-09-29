#include <stdio.h>
int main()
{
    int num,interChanged;
    printf("Enter a 4 digit Number\n");
    scanf("%d",&num);
    interChanged=((num%10)*1000)+(((num/10)%100)*10)+(num/1000);
    printf("%d",interChanged);
    return 0;

}