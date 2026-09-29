#include <stdio.h>
int main()
{
    int num,rev;
    printf("Enter a 5 digit Number\n");
    scanf("%d",&num);
    rev=((num%10)*10000)+(((num/10)%10)*1000)+(((num/100)%10)*100)+(((num/1000)%10)*10)+((num/10000)%10);
    printf("%d",rev);

    return 0;

}