#include <stdio.h>
int main()
{
    // Temperature
    float c, f;
    printf("Enter the value of C:");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("The value of F:%f", f);
    
    // Gross Salary
    float s, hra, da, ta, result;

    printf("Enter S:");
    scanf("%f", &s);
    printf("Enter HRA:");
    scanf("%f", &hra);
    printf("Enter DA:");
    scanf("%f", &da);
    printf("Enter TA:");
    scanf("%f", &ta);
    result = s +
             (100 * (hra / s)) +
             (100 * (da / s)) +
             (100 * (ta / s));
    printf("Gross Salary:%.0f", result);


    // Angle of Triangle
    int a, b;
    printf("Enter first angle:");
    scanf("%d", &a);
    printf("Enter second angle:");
    scanf("%d", &b);

    printf("Third angle=%d", 180 - a - b);
    return 0;
}