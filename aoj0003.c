// AOJ Volume 0 Problem 0003

#include <stdio.h>

int main(void)
{
    int i;
    int n, num1, num2, num3;
    int flag;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        scanf("%d%d%d", &num1, &num2, &num3);
        
        flag = 0;
        if (num1 * num1 == num2 * num2 + num3 * num3){
            flag = 1;
        }
        if (num2 * num2 == num1 * num1 + num3 * num3){
            flag = 1;
        }
        if (num3 * num3 == num2 * num2 + num1 * num1){
            flag = 1;
        }

        if (flag == 1){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    
    return (0);
}
