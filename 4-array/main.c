#include <stdio.h>

void memAdr(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        printf("index: %d, address: %x, value: %d\n", i, &arr[i], arr[i]);
        i++;
    }
}

int main() {
    int size = 5;
    int ints[5] = {1, 2, 3, 4, 5};

    memAdr(ints, size);

    return 0;
}
