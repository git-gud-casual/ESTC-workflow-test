#include <stdio.h>
#include <malloc.h>
#include "vector3/vector3.h"

int main() {
    vector3* v1 = create_vector(1, 2, 3), 
            *v2 = create_vector(4, 5, 6);

    // Test sum of vectors
    vector3* sum_v = sum(v1, v2);
    if (sum_v != NULL) {
        printf("Sum of vectors: ");
        print_vector3(sum_v);
        free(sum_v);
    }

    // Test sub of vectors
    vector3* sub_v = sub(v1, v2);
    if (sub_v != NULL) {
        printf("Subtraction of vectors: ");
        print_vector3(sub_v);
        free(sub_v);
    }

    // Test cross of vectors
    vector3* cross_v = cross(v1, v2);
    if (cross_v != NULL) {
        printf("Cross of vectors: ");
        print_vector3(cross_v);
        free(cross_v);
    }

    // Test dot product of vectors
    int dot_sum = dot(v1, v2);
    printf("Dot product = %d\n", dot_sum);

    return 0;
}