#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter a postive integer: ");
    scanf("%d", &num);
    if (num == 0)
        printf("Factorial of 0 is 1");
    else
    {
        int fact = 1;
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d = %d", num, fact);
    }
}