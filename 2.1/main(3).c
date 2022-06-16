#include <stdio.h>
#include <tgmath.h>

double powr2 (double x, unsigned int n, double p) {
    double s = 0.0;
    printf("1) s = %lf n = %d p = %lf \n", s, n, p);
    if (n == 1) {
        s = 4.0/3;
        printf("2) s = %lf n = %d p = %lf \n", s, n, p);
    }else {
        p =  p * (1-(4.0 * x / 3));
        s = powr2(x, n-1, p);
        s = s + p;
        printf("3) s = %lf n= %d p = %lf \n", s, n, p);
    }
    return s;
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
        double res = powr2(x, n, 4.0/3);
        printf("res = %lf\n", res);
    }
    return 0;

}