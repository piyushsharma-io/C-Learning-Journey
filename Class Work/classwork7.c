#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j, k, ch;

    printf("Enter first matrix:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Transpose");

    printf("\nEnter choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            for(i = 0; i < 2; i++)
            {
                for(j = 0; j < 2; j++)
                    printf("%d ", a[i][j] + b[i][j]);
                printf("\n");
            }
            break;

        case 2:
            for(i = 0; i < 2; i++)
            {
                for(j = 0; j < 2; j++)
                    printf("%d ", a[i][j] - b[i][j]);
                printf("\n");
            }
            break;

        case 3:
            for(i = 0; i < 2; i++)
            {
                for(j = 0; j < 2; j++)
                {
                    c[i][j] = 0;

                    for(k = 0; k < 2; k++)
                        c[i][j] += a[i][k] * b[k][j];

                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            break;

        case 4:
            for(i = 0; i < 2; i++)
            {
                for(j = 0; j < 2; j++)
                    printf("%d ", a[j][i]);
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}