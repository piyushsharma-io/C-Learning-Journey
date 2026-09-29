#include <stdio.h>
int main()
{
  int Hour,Minute,Second;
  printf("Input time\n");
  scanf("%d%d%d",&Hour,&Minute,&Second);
  if (Hour<24 && Minute<60 && Second<60 && Hour>-1 && Minute>-1 && Second>-1)
  {
    printf("VALID TIME");
  }
  else
  {
    printf("INVALID TIME");
  }
  return 0;
}