#include "vector3.h"
#include <malloc.h>
#include <stdio.h>

vector3* sum(const vector3* vector1, const vector3* vector2) {
    vector3* sum_vector = malloc(sizeof(vector3));

    sum_vector->x = vector1->x + vector2->x;
    sum_vector->y = vector1->y + vector2->y;
    sum_vector->z = vector1->z + vector2->z;

    return sum_vector;
}

int dot(const vector3* vector1, const vector3* vector2) {
    int sum = 0;

    sum += vector1->x * vector2->x;
    sum += vector1->y * vector2->y;
    sum += vector1->z * vector2->z;

    return sum;
}

void print_vector3(const vector3* vector) {
    printf("x = %d, y = %d, z = %d\n", vector->x, vector->y, vector->z);
}