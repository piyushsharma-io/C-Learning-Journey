#include <stdio.h>

int main()
{
    //This is a integer Datatype Example:
    int firstNumber=10,secondNumber,Addition;
    secondNumber=20;
    Addition=firstNumber+secondNumber;
    printf("The Sum of a=%d and b=%d is=%d \n",firstNumber,secondNumber,Addition);

    //This is a Character(char) Datatype Example:
    char cha1='A',cha2;
    cha2='B';
    printf("The 2 Characters are %c and %c \n",cha1,cha2);

    //This is a Float Datatype Example:
    float f1=1.9,f2;
    f2=8.1;
    printf("These two Float Numbers %f and %f add upto 10",f1,f2);

    /*
    There is another Datatype known as (Double),
    which is used to increase the memory storage of the default Datatype like float, etc.
    */
   
    return 0;
}