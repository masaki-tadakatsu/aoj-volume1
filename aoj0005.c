// AOJ Volume 0 Problem 0005

#include <stdio.h>

int cal_gcd(int a, int b)
{
    int t;
    
    if (a < b){
        t = a;
        a = b;
        b = t;
     }
        
     while (a % b != 0){
        t = b;
        b = a % b;
        a = t;
    }
    return (b);
}

int main(void)
{
    int a, b;
    int gcd, lcm;
    
    while (scanf("%d%d", &a, &b) != EOF){
        gcd =cal_gcd(a, b);
        
        lcm = a / gcd * b;
        
        printf("%d %d\n", gcd, lcm);
    }
    
    return (0);
}
