#include <stdio.h>

int main()
{
    int num, original, digit;
    int sum = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    for(; num > 0; num = num / 10)
    {
        digit = num % 10;
        sum = sum + digit;
        product = product * digit;
    }

    if(sum == product)
        printf("%d is a Dignified Number", original);
    else
        printf("%d is NOT a Dignified Number", original);

    return 0;
}