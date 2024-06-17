//
// Created by bnkr on 17.06.24.
//

#ifndef CODE_6_FIND_ALL_HIDDEN_COLUMNS_H
#define CODE_6_FIND_ALL_HIDDEN_COLUMNS_H

#include <stdio.h>
#include <stdbool.h>

#include "../../data_structures/matrix/matrix.h"

void find_all_hidden_columns() {
    int m, n;
    scanf("%d %d", &m, &n);

    printf("m: %d n: %d\n", m, n);

    matrix mat = get_mem_matrix(m, n);
    matrix res = get_mem_matrix(m , n);

    printf("Input matrix element\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat.values[i][j]);
            res.values[i][j] = mat.values[i][j];
        }

    for (int i = 0; i < m; i++) {
        bool is_zero = false;
        for (int j = 0; j < n; j++) {
            if (is_zero) {
                res.values[i][j] = 0;
                continue;
            }

            is_zero = res.values[i][j] == 0;
        }
    }

    printf("Columns with hidden cube: \n");
    for (int j = 0; j < n; j++) {
        bool uni_in_mat = false;
        bool all_zero_in_res = true;
        for (int i = 0; i < m; i++) {
            if (mat.values[i][j])
                uni_in_mat = true;
            if (res.values[i][j])
                all_zero_in_res = false;
        }

        if (uni_in_mat && all_zero_in_res)
            printf("%d ", j);
    }
}

#endif //CODE_6_FIND_ALL_HIDDEN_COLUMNS_H
