#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n,i;
    printf("Enter x value: ");
    scanf("%lf", &x);
    printf("Enter n value: ");
    scanf("%d", &n);
    if (fabs(x) < 0.5 || fabs(x) > 1) {
        printf("Invalid value of x!");
        return 0;
    }
    double sum = 0.0, elem;
    elem = 4.0/3;
    sum += elem;
    printf("F%d = %lf\n", 1, elem);
    for(i = 2; i <= n; i++){
        elem *= (1- 4.0*x/3);
        printf("F%d = %lf\n", i, elem);
        sum+=elem;
    }
    printf("\n");
    printf("sum = ");
    printf("%lf", sum);
    printf("\n");
    return 0;
}