#ifndef MODULE
#define MODULE

typedef struct {
    int x;
    int y;
    int z;
} vector3;

vector3* create_vector(int, int, int);

vector3* sum(const vector3*, const vector3*);
vector3* sub(const vector3*, const vector3*);
int dot(const vector3*, const vector3*);
vector3* cross(const vector3*, const vector3*);

void print_vector3(const vector3*);

#endif