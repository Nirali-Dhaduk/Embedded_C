#include <stdio.h>

typedef struct cla
{

    int (*addition)(int a, int b);
    int (*subtraction)(int a, int b);
    int (*multipication)(int a, int b);
    float (*division)(int a, int b);
} cal_t;
int sum(int a, int b)
{
    return a + b;
};
int sub(int a, int b)
{
    return a - b;
};
int mul(int a, int b)
{
    return a * b;
};
float div(int a, int b)
{
    return a / b;
};
int main()
{

    cal_t c = {sum, sub, mul, div};
    printf("\nsum = %d", c.addition(24, 12));
    printf("\nsub = %d", c.subtraction(24, 12));
    printf("\nmul = %d", c.multipication(24, 12));
    printf("\ndiv = %.1f", c.division(24, 12));

    return 0;
}