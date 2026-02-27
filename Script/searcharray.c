//  Arrays in C
#include <stdio.h>

int SearchElement(int ar[], int element) {
    
    
    for (int i=0; i<5; ++i)
    {
        
        if (ar[i]==element)
            return ar[i];
    }
    return -1;
}


int main() {
    int a[5] = {100, 110, 140, 160, 170};
    int element = SearchElement(a, 100);
    
    printf("Element found = %d\n", element);
}