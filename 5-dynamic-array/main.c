#include <stdlib.h>
#include <stdio.h>

typedef struct Array
{
    int* array;
    size_t used;
    size_t size;
} Array;

void initArray(Array *a, size_t initialSize)
{
    a->array = malloc(initialSize * sizeof(int));
    a->used = 0;
    a->size = initialSize;
}

// Double the array in size every time we need more room
void insertArray(Array *a, int element)
{
    if (a->used == a->size) {
        // double the array
        a->size *= 2;
        a->array = realloc(a->array, a->size * sizeof(int));
    }
    a->array[a->used++] = element;
}

void freeArray(Array *a)
{
    free(a->array);
    a->array = NULL;
    a->used = a->size = 0;
}

void main()
{
    // Some follow convention to declare all variables at the top of the function
    Array a;
    int i;

    initArray(&a, 5);
    for (i = 0; i < 100; i++) {
        insertArray(&a, i);
    }
    
    printf("Last item %d\n", a.array[a.used - 1]);
    printf("Size %ld\n", a.used);
    printf("Used %ld\n", a.size);

    insertArray(&a, -100);
    insertArray(&a, -100);
    insertArray(&a, -100);
    insertArray(&a, -100);
    insertArray(&a, -100);

    printf("Last item %d\n", a.array[a.used - 1]);
    printf("Size %ld\n", a.size);
    printf("Used %ld\n", a.used);

    freeArray(&a);

    // This will cause a segmentation fault
    // printf("Last item %d\n", a.array[a.used - 1]);
}
