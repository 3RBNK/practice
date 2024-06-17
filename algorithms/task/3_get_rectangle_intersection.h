//
// Created by bnkr on 17.06.24.
//

#ifndef CODE_3_GET_RECTANGLE_INTERSECTION_H
#define CODE_3_GET_RECTANGLE_INTERSECTION_H

#include <stdio.h>


typedef struct rectangle {
    int a;
    int b;
    int c;
    int d;
} rectangle;


int min2(const int a, const int b) {
    return a < b ? a : b;
}


int max2(const int a, const int b) {
    return a > b ? a : b;
}


rectangle intersection(const rectangle* rect1, const rectangle* rect2) {
    rectangle result;

    result.a = max2(rect1->a, rect2->a);
    result.b = min2(rect1->b, rect2->b);
    result.c = max2(rect1->c, rect2->c);
    result.d = min2(rect1->d, rect2->d);

    return result;
}


void get_rectangle_intersection() {
    int n;
    scanf("%d", &n);

    rectangle result;
    scanf("%d %d %d %d", &result.a, &result.b, &result.c, &result.d);

    for (int i = 0; i < n - 1; i++) {
        rectangle rect;
        scanf("%d %d %d %d", &rect.a, &rect.b, &rect.c, &rect.d);

        result = intersection(&rect, &result);

        printf("area after %d intersection: %d \n", i + 2, (result.b - result.a) * (result.d - result.c));
    }
}


#endif // CODE_3_GET_RECTANGLE_INTERSECTION_H
