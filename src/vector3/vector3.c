#include "vector3.h"
#include <malloc.h>
#include <stdio.h>


vector3* create_vector(int x, int y, int z) {
    vector3* vector = malloc(sizeof(vector3));

    if (vector != NULL) {
        vector->x = x;
        vector->y = y;
        vector->z = z;
    }
    return vector;
}

vector3* sum(const vector3* vector1, const vector3* vector2) {
    return create_vector(vector1->x + vector2->x,
                         vector1->y + vector2->y,                     
                         vector1->z + vector2->z);
}

vector3* sub(const vector3* vector1, const vector3* vector2) {
    return create_vector(vector1->x - vector2->x, 
                         vector1->y - vector2->y, 
                         vector1->z - vector2->z);
}

int dot(const vector3* vector1, const vector3* vector2) {
    int sum = 0;

    sum += vector1->x * vector2->x;
    sum += vector1->y * vector2->y;
    sum += vector1->z * vector2->z;

    return sum;
}

vector3* cross(const vector3* vector1, const vector3* vector2) {
    return create_vector(vector1->y * vector2->z - vector1->z * vector2->y,
                         vector1->z * vector2->x - vector1->x * vector2->z, 
                         vector1->x * vector2->y - vector1->y * vector2->x);
}

void print_vector3(const vector3* vector) {
    printf("(%d, %d, %d)\n", vector->x, vector->y, vector->z);
}