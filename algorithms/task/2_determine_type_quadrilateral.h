//
// Created by Kirill on 17.06.2024.
//

#ifndef CODE_2_DETERMINE_TYPE_QUADRILATERAL_H
#define CODE_2_DETERMINE_TYPE_QUADRILATERAL_H

#include <stdio.h>
#include <math.h>

void determine_type_quadrilateral() {
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;

    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);


    double l = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    double m = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));

     if (((x3 - x2) * (y4 - y1) == (x4 - x1) * (y3 - y2)) || ((x2 - x1) * (y3 - y4) == (x3 - x4) * (y2 - y1))) {
         if (((x2 - x1) * (y3 - y4) == (x3 - x4) * (y2 - y1)) && ((x3 - x2) * (y4 - y1) == (x4 - x1) * (y3 - y2))) {
             if (l == m)
                 printf("Rectangle\n");
             else
                 printf("Parallelogram\n");
         } else {
             printf("Trapezoid\n");
         }
     } else {
         printf("An arbitrary quadrilateral\n");
     }
}

#endif //CODE_2_DETERMINE_TYPE_QUADRILATERAL_H
