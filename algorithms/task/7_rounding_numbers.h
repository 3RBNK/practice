//
// Created by bnkr on 17.06.24.
//

#ifndef CODE_7_ROUNDING_NUMBERS_H
#define CODE_7_ROUNDING_NUMBERS_H


#include <stdio.h>
#include <math.h>


void print_array(const float a[], const int n) {
    for (int i = 0; i < n; i++)
        printf("%.3f ", *(a + i));
    printf("\n");
}


void rounding_numbers() {
    int m;
    printf("Input array size \n");
    scanf("%d", &m);

    float a[m];
    printf("Input array element \n");
    for (int i = 0; i < m; i++)
        scanf("%f", a + i);

    for (int i = 0; i < m; i++) {
        const int sign = (int) (a[i] / fabs(a[i]));

        a[i] *= sign;
        a[i] *= 10000;
        int x = (int) a[i];
        printf("x: %d\n", x);
        const int remains = x % 10;
        x /= 10;

        if (remains >= 5)
            x += 1;

        a[i] = sign * x / 1000.0;
    }

    print_array(a, m);
}


#endif //CODE_7_ROUNDING_NUMBERS_H
