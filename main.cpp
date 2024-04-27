#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int *v = new int[10];
    
    v = resize(v, 10, 25);
    
    delete []v; // Por cada new tiene que haber un delete.
    v = NULL; // Me aseguro que el puntero no quede apuntando a memoria que ya no pertenece a mi programa.

    return 0;
}