// AOJ Volume 0 Problem 0004

#include <stdio.h>

int main(void)
{
    float a, b, c, d, e, f;
    float x, y;
    
    while (scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f) != EOF){
        y = (c * d - a * f) / (b * d - a * e);
        
        x = (c - b * y) / a;
        
        printf("%.3f %.3f\n", x, y);
    }
    
    return (0);
}
