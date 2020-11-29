#ifndef VECTOR_H
#define VECTOR_H

// initialize

extern void vector_init(void);

// status code

enum vector_status {
    VECTOR_OK = 0,
    VECTOR_ERROR = 1,
    VECTOR_OUT_OF_BOUND = 2,
};

extern int vector_getstatus();

// vector of int

typedef struct {
    int size;
    int capacity;
    int* data;
} vector;

extern vector* vector_new(int capacity);
extern void vector_delete(vector* v);
extern int vector_size(vector* v);
extern int vector_capacity(vector* v);
extern int vector_get(vector* v, int pos);
extern void vector_add(vector* v, int n);
extern void vector_set(vector* v, int pos, int n);

#endif // VECTOR_H
