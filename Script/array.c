//  Arrays in C
#include <stdio.h>

void main() {
    int a[5] = {100, 110, 140, 160, 170};
    int sum = 0;
    for (int i=0; i<5; ++i)
    {
        printf("Element at [%d] = %d\n", i, a[i]);
        sum += a[i];
    }
    
    printf("Sum of all elements in array =%d\n", sum);

    int max = a[0];
    for (int i=1; i<5; ++i)
    {
        
        if (max <a[i])
            max = a[i];
    }
    printf ("Max element found = %d\n", max);
}