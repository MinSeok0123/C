#include <stdio.h>
int main()
{
    float a = 0, y;
    float ui[11] = {};
    float enso[11][2] = {{1990, 0.6},
                         {1991, 0.2},
                         {1992, 1.1},
                         {1993, 0.5},
                         {1994, 0.1},
                         {1995, 1.2},
                         {1996, -0.3},
                         {1997, -0.1},
                         {1998, 2.2},
                         {1999, -0.7},
                         {2000, -1.1}};
    printf("엘리뇨 : ");
    for (int i = 0; i < 11; i++)
    {
        if (enso[i][1] > 0)
            printf("%.0f ", enso[i][0]);
    }
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        if (enso[i][1] > a)
        {
            a = enso[i][1];
            y = enso[i][0];
        }
    }
    printf("가장 강한 엘니뇨 : %.0f", y);
    a = 0;
    printf("\n");
    printf("라니냐 : ");
    for (int i = 0; i < 11; i++)
    {
        if (enso[i][1] < 0)
            printf("%.0f ", enso[i][0]);
    }
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        if (enso[i][1] < a)
        {
            a = enso[i][1];
            y = enso[i][0];
        }
    }
    printf("가장 강한 라니냐 : %.0f", y);
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        if (enso[i][1] < 0)
            ui[i] = enso[i][1] * -1;
        else
            ui[i] = enso[i][1];
    }
    a = ui[0];
    printf("가장 정상적인 해 : ");
    for (int i = 1; i < 11; i++)
    {
        if (a >= ui[i])
        {
            a = ui[i];
        }
    }
    for (int i = 1; i < 11; i++)
    {
        if (a == ui[i])
        {
            printf("%.0f ", enso[i][0]);
        }
    }
    return 0;
}