#include <stdio.h>
void calculator(void);
double calculate(double, double, char);
int main()
{
    double answer;
    double num1, num2; 
    char operator;

    calculator();

    printf("Enter number 1: ");
    scanf("%lf", &num1);
    printf("Enter number 2: ");
    scanf("%lf", &num2);
    printf("Enter operator (+, -, x, /): ");
    scanf(" %c", &operator);

    answer = calculate(num1, num2, operator);
    printf("\nAnswer: %.2lf", answer);

    return 0;
}

void calculator(void)       
{
    // Prints the ASCII Art Calculator.

    int rows = 14;
    int cols = 23;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if((j == 0 || j == cols - 1) && i >= 1 ||
               (i == 2 && j == 2) || (i == 3 && j == 2) ||
               (i == 2 && j == cols - 3) || (i == 3 && j == cols - 3) ||
               (i >= 5 && i <= rows - 2) && (j >= 2 && j <= cols - 3) && (j == 2 || j == 6 || j == 10 || j == 14 || j == 16 || j == 20))
                printf("|");
            else if((i == 0 || i == rows - 1) && (j >= 1 && j < cols - 1) ||
                    (i >= 1 && j >= 3 && j < cols - 3) && (i == 1 || i == 3) ||
                    (i >= 4 && ((j >= 3 && j < 14) || (j >= 17 && j < cols - 3)) && (i == 4 || i == 6 || i == 8 || i == 10 || i == 12)))
                printf("_");
            else if(i == 5 && j == 4)
                printf("7");
            else if(i == 5 && j == 8)
                printf("8");
            else if(i == 5 && j == 12)
                printf("9");
            else if(i == 5 && j == 18)
                printf("+");
            else if(i == 7 && j == 4)
                printf("4");
            else if(i == 7 && j == 8)
                printf("5");
            else if(i == 7 && j == 12)
                printf("6");
            else if(i == 7 && j == 18)
                printf("-");
            else if(i == 9 && j == 4)
                printf("1");
            else if(i == 9 && j == 8)
                printf("2");
            else if(i == 9 && j == 12)
                printf("3");
            else if(i == 9 && j == 18)
                printf("x");
            else if(i == 11 && j == 4)
                printf(".");
            else if(i == 11 && j == 8)
                printf("0");
            else if(i == 11 && j == 12)
                printf("=");
            else if(i == 11 && j == 18)
                printf("/");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


double calculate(double n1, double n2, char op)              
{
    // Calculates two numbers depending on their operator.

    double result;

    switch(op)
    {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case 'x':
            result = n1 * n2;
            break;
        case '/':
            result = n1 / n2;
            break;
    }

    return result;
}