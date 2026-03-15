#include <stdio.h>
#include <stdlib.h>

void printarray (int size, int array[size]);
void ordering (int size, int *parray);

int main () {
    int size, i;
    
    printf("Insert the array size: ");
    scanf("%d", &size);
    int array[size];

    printf("Insert an array:\n");
    for (i = 0; i < size; i++) {
        printf("Insert the %d/%d array element: ", i + 1, size);
        scanf("%d", &array[i]);
    }
    
    printarray(size, array);
    ordering (size, array);
    return 0;
}

void printarray (int size, int array[size]) {
    int i;
    printf("This is the array: ");
    for (i = 0; i < size; i++) {
        if (i == 0) printf("{%d, ", array[i]);
        else if (i > 0 && i < size - 1) printf("%d, ", array[i]);
        else printf("%d}\n", array[i]);
    }
}

void ordering (int size, int *parray) {
    int i, j, temp;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (parray[i] > parray[j]) {
                temp = parray[i];
                parray[i] = parray[j];
                parray[j] = temp;            
            }
        }
    }
    
    printf("This is the ordered array: ");
    for (i = 0; i < size; i++) {
        if (i == 0) printf("{%d, ", parray[i]);
        else if (i > 0 && i < size - 1) printf("%d, ", parray[i]);
        else printf("%d}\n", parray[i]);
    }
}    
