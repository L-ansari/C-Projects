//  Arrays in C
#include <stdio.h>

int SumELements (int ar[], int size)
{


    int sum = 0;
    for (int i=0; i<size; ++i)
    {
        sum += ar[i];
    }

    return sum;
}
int PrintArray (int ar[], int size)
{

for (int i=0; i<size; ++i)
    {
        printf("Element at [%d] = %d\n", i, ar[i]);
    }

}

int FindMax(int a[], int size)
{

    int max = a[0];
    for (int i=1; i<5; ++i)
    {
        
        if (max <a[i])
            max = a[i];
    }
    return max;
}

void main() {
    int a[5] = {100, 110, 140, 160, 170};
    PrintArray(a,5);
    int sum = SumELements(a, 5);
    
    printf("Sum of all elements in array =%d\n", sum);
    printf ("Max element found = %d\n", FindMax(a,5));
}