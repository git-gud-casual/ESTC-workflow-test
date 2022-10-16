#ifndef MODULE
#define MODULE

typedef struct vector3 {
    int x;
    int y;
    int z;
} vector3;

vector3* sum(const vector3*, const vector3*);
vector3* sub(const vector3*, const vector3*);
int dot(const vector3*, const vector3*);
vector3* cross(const vector3*, const vector3*);

void print_vector3(const vector3*);

#endif