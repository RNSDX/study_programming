#include <stdio.h>


int main(void) {
    const int n = 7;
    int a[n] = {1, 30, 14, 5, 90, 1, 10};
    int buf;

    for(int i = 1; i < n; i++) {
	    for(int j = i; j > 0 && a[j-1] > a[j]; j--) {
            buf = a[j-1];
            a[j-1] = a[j];
            a[j] = buf;
        }
    }

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\n");
    
    return 0;
}