#include <stdio.h>
void calculator(void);
int main()
{
    calculator();

    return 0;
}

void calculator(void)
{
    /*
    111111111111
    201111111102
    201	     102 
    201111111102
    200000000002
    200000000002
    200000000002
    200000000002
    200000000002
    111111111111
    */

    int rows = 13;
    int cols = 23;

    // 23 - 2 = 21

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if((j == 0 || j == cols - 1) && i >= 1 ||
               (i == 2 && j == 2))
                printf("|");
            else if((i == 0 || i == rows - 1) && (j >= 1 && j < cols - 1) ||
                    (i >= 1 && j >= 3 && j < cols - 3) && (i == 1 || i == 3))
                printf("_");
            else
                printf(" ");
        }
        printf("\n");
    }
}