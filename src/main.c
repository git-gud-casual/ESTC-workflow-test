#include <stdio.h>
#include <malloc.h>
#include "vector3/vector3.h"

int main() {
    vector3 v1 = {1, 2, 3}, v2 = {4, 5, 6};

    // Test sum of vectors
    vector3* sum_v = sum(&v1, &v2);
    if (sum_v != NULL) {
        print_vector3(sum_v);
        free(sum_v);
    }

    // Test dot product of vectors
    int dot_sum = dot(&v1, &v2);
    printf("Dot product = %d\n", dot_sum);

    return 0;
}