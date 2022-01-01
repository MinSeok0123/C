#include <stdio.h>
#include <string.h>
int main()
{
    char a[101];
    char b[101];
    int i, j = 0;
    gets(a);
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] == ' ')
        {
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            b[j] = (a[i] + 32);
            j++;
        }
        else
        {
            b[j] = a[i];
            j++;
        }
    }
    for (i = 0; i < j; i++)
        printf("%c", b[i]);
    return 0;
}
