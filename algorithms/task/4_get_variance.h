//
// Created by bnkr on 17.06.24.
//

#ifndef CODE_4_GET_VARIANCE_H
#define CODE_4_GET_VARIANCE_H

#include <stdio.h>


void get_variance() {
    int k;
    printf("Input vector size");
    scanf("%d", &k);

    int v[k];
    printf("Input array");
    for (int i = 0; i < k; i++)
        scanf("%d", v + i);

    float x_average = 0;
    for (int i = 0; i < k; i++)
        x_average += v[i];
    x_average /= k;

    float d_variance = 0;
    for (int i = 0; i < k; i++)
        d_variance += (v[i] - x_average) * (v[i] - x_average);
    d_variance /= k - 1;

    printf("average: %f, variance: %f \n", x_average, d_variance);
}

#endif //CODE_4_GET_VARIANCE_H
