#include <stdio.h>
#include <tgmath.h>

double s = 0.0;
double powr2 (double x, unsigned int n) {
    double i = -1;
    printf("i = %.7f n = %d s = %lf\n", i, n, s);
    if (n == 1)
        i = 4.0/3;
    else {
        i = (1 - (4*x/3)) * powr2(x, n - 1);
    }
    s = s + i;
    printf("i = %.7f n = %d s = %lf\n", i, n, s);
    return i;
}

int main() {
    double x;
    unsigned int n;
    printf("Enter x value: ");
    scanf("%lf", &x);
    printf("Enter n value: ");
    scanf("%d", &n);
    if (fabs(x) < 0.5 || fabs(x) > 1) {
        printf("Invalid value of x!");
        return 0;
    }else{
        double res = powr2(x, n);
        printf("res = %lf\n", res);
        printf("s = %lf\n", s);
    }
    return 0;
}