#include <stdio.h>
int main()
{
    char arr[1000];
    int cnt = 0;
    int sum = 0;
    int i;
    scanf("%s", arr);
    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 48 && arr[i] <= 57)
        {
            sum = sum * 10 + (arr[i] - 48);
        }
    }
    printf("%d\n", sum);
    for (i = 1; i <= sum; i++)
    {
        if (sum % i == 0)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}