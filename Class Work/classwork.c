#include <stdio.h>
int main()
{
    int num,sum;
    printf("Enter a 5 digit Number\n");
    scanf("%d",&num);
    sum=((num/10000)+((num/1000)%10)+((num/100)%10)+((num/10)%10)+(num%10));
    printf("The sum of the digits is: %d",sum);
    return 0;

}