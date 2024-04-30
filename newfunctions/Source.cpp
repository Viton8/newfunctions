#include "Header.h"
#include "math.h"

int Sum(int a, int b, int c)
{
    return a + b + c;
}

double Average(int a, int b) {
    double result;
    result = double((a + b) / 2.0);
    return result;
}

int Max(int a, int b, int c)
{
    int max = 0;
    if (a > b && a > c) max = a;
    if (b > a && b > c) max = b;
    if (c > b && c > a) max = c;
    return max;
}

int If2(int a)
{
    if (a > 0) return a + 1;
    else  return  a - 2;
}

double If24(int x)
{
    double f;
    // test
    if (x > 0) f = (2 * sin(x));
    if (x <= 0) f = (6 - x);
    return f;
}