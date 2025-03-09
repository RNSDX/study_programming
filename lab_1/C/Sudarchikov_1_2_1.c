#include <stdio.h>
#include <math.h>


int main(void) {
    const double r1 = 228e9;
    const double r2 = 150e9;
    const double t1 = 686.96 * 24 * 3600;
    const double t2 = 365.26 * 24 * 3600;

    double w1 = (2 * M_PI) / t1;
    double w2 = (2 * M_PI) / t2;

    printf("\nt, days\t\tx, mln. km\t\ty, mln. km\n");
    for (int t = 0; t < 365; t++) {
        double t_sec = t * 24 * 3600;
        double x = r1 * cos(w1 * t_sec) - r2 * cos(w2 * t_sec);
        double y = r1 * sin(w1 * t_sec) - r2 * sin(w2 * t_sec);

        printf("%d\t\t%.4f\t\t\t%.4f\n", t + 1, x / 1e9, y / 1e9);
    }
    
    return 0;
}

