#include <malloc.h>
#include "vector.h"

// status code

static enum vector_status status;

int vector_getstatus(void) {
    return status;
}

static void stat_ok(void) {
    status = VECTOR_OK;
}

static void stat_ng(void) {
    status = VECTOR_ERROR;
}

static void stat_oob(void) {
    status = VECTOR_OUT_OF_BOUND;
}

// initialize

void vector_init(void) {
    stat_ok();
}

// vector of int

vector* vector_new(int capacity) {
    stat_ok();
    vector* ret = (vector*)malloc(sizeof(vector));
    if (ret == NULL) {
        stat_ng();
        return NULL;
    }

    ret->data = (int*)malloc(sizeof(int) * capacity);
    if (ret->data == NULL) {
        stat_ng();
        free(ret);
        return NULL;
    }
    ret->size = 0;
    ret->capacity = capacity;

    return ret;
}

void vector_delete(vector* v) {
    stat_ok();
    free(v->data);
    free(v);
}

int vector_size(vector* v) {
    stat_ok();
    return v->size;
}

int vector_capacity(vector* v) {
    stat_ok();
    return v->capacity;
}
int vector_get(vector* v, int pos) {
    stat_ok();
    if (pos < 0 || pos > v->size) {
        stat_oob();
        return -1;
    }
    return *(v->data + pos);
}

static int* enlarge_vector(int* data, int new_size) {
    return (int*)realloc(data, new_size);

}

void vector_add(vector* v, int n) {
    stat_ok();
    int new_size = v->size + 1;
    if (new_size > v->capacity) {
        int* p = enlarge_vector(v->data, v->capacity * 2);
        if (p == NULL) {
            stat_ng();
            return;
        }
        v->data = p;
    }
    *(v->data + v->size) = n;
    v->size = new_size;
}

void vector_set(vector* v, int pos, int n) {
    stat_ok();
    if (pos < 0 || pos > v->size) {
        stat_oob();
        return;
    }
    *(v->data + pos) = n;
}
