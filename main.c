/* Calculation of simple interest */
#include <stdio.h>
int main()
{
    int p, si, n, r, a;
    float fsi;
    printf("Enter the principle, rate of interest, period to calculate simple interest.\n");
    scanf("%d %d %d/n", &p, &n, &r );
    si = p * n * r;
    fsi = si / 100;
    a = fsi + p;
    printf("Principle: %d", p);
    printf("\nNumber of Years: %d", n);
    printf("\nRate of Interest: %d", r);
    printf("\nSimple Interest: %f", fsi);
    printf("\nAmount: %d", a);
    return 0;
}