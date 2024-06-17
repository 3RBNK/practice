//
// Created by Kirill on 17.06.2024.
//

#ifndef CODE_1_GET_TIME_H
#define CODE_1_GET_TIME_H

#include <stdio.h>


void get_time() {
    int h1, h2, m1, m2, s1, s2;
    printf("Input first time: ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Input second time: ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    int first_time_in_second = h1 * 3600 + m1 * 60 + s1;
    int second_time_in_second = h2 * 3600 + m2 * 60 + s2;

    int diff_time = second_time_in_second - first_time_in_second;

    int diff_h = diff_time / 3600;
    int diff_m = diff_time % 3600 / 60;
    int diff_s = diff_time % 60;

    printf("%d:%d:%d \n", diff_h, diff_m, diff_s);
}

#endif //CODE_1_GET_TIME_H
