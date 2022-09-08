// AOJ Volume 0 Problem 0001

#include <stdio.h>

int main(void)
{
    int i;
    int height;
    int height_1st, height_2nd, height_3rd;
    
    height_1st = height_2nd = height_3rd = 0;
    
    for (i = 0; i < 10; i++){
        scanf("%d", &height);
        if (height > height_1st){
            height_3rd = height_2nd;
            height_2nd = height_1st;
            height_1st = height;
        }
        else if (height > height_2nd){
            height_3rd = height_2nd;
            height_2nd = height;
        }
        else if (height > height_3rd){
            height_3rd = height;
        }
    }
    
    printf("%d\n%d\n%d\n", height_1st, height_2nd, height_3rd);
    
    return (0);
}
