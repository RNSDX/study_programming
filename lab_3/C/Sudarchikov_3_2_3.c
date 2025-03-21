#include <stdio.h>
#include <stdlib.h>
#include <math.h>


enum Week {mon, tue, wed, thu, fri, sat, sun};

int main(void) {

    printf("\nWeek:");
    for (int i = mon; i < 7; i++)
        printf("\n%d", i+1);
    printf("\n\n");

    return 0;
} 