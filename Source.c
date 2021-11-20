#include <stdio.h>

int main()
{
    int scoreOne, scoreTwo, sum;

    printf("Input the first Score: ");
    scanf("%d", &scoreOne);
    printf("Input the second Score: ");
    scanf("%d", &scoreTwo);

    sum = scoreOne + scoreTwo;

    printf("\nThe sum of the two numbers is %d\n", sum);

    return 0;
}