#include <stdio.h>
int main()
{
    int n = 0, sum = 1;
    scanf("%d", &n);
    printf("1");
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf(" + %d", i);
            sum += i;
        }
    }
    printf(" =");
    printf(" %d", sum);
    return 0;
}
