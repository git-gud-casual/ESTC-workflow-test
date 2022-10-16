#include <stdio.h>
#include <malloc.h>
#include "vector3/vector3.h"

int main() {
    vector3 v1 = {1, 2, 3}, v2 = {4, 5, 6};

    vector3* sum_v = sum(&v1, &v2);
    if (sum_v != NULL) {
        print_vector3(sum_v);
        free(sum_v);
    }
    return 0;
}