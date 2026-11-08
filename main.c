#include <stdio.h>

int main(void)
{
    double ylimit;
    double g = 3.71;
    double y = 0.0;
    double v = 0.0;
    double t;

    scanf("%lf", &ylimit);

    if (ylimit < 0)
    {
        printf("NG");
        return 0;
    }

    for (t = 0.0; ; t += 0.1)
    {
        v = g * t;
        y = g * t * t / 2.0;

        if (y >= ylimit)
        {
            break;
        }
    }

    printf("%.3f", v);

    return 0;
}