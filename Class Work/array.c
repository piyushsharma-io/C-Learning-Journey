#include <stdio.h>
int main()
{
    char marks[5];
    marks[0]=12;
    marks[1]=14;
    marks[3]=18;
    marks[4]=20;
    int n,j;
    n=sizeof(marks);
    for (int i=0; i<n; i++){
        j=marks[i];
        printf("%d ",j);
    }
    return 0;
    
}