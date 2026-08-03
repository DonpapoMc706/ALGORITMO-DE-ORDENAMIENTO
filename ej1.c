#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{ 
    int v[] = {8, 5, 2, 7, 4};
    int hubo_cambio = 1; 
        while (hubo_cambio) {
         hubo_cambio = 0;
         for (int i = 0; i < 4; i++){
        if (v[i] > v [i + 1])
        {
             int aux = v[i];
             v[i] = v[i + 1];
             v[i + 1] = aux;
             hubo_cambio = 1;
        }
    }
}
    printf ("arreglo ordenado: \n");
    for (int i = 0; i < 5; i++){
        printf ("%d\n", v[i]);
    }
    
}
