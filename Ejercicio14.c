#include <stdio.h>

int main()
{
    int n=3,resultado;
     printf("Los primeros 20 multiplos de 3 son: ");
   
    for(int cont=1; cont<=20; cont++) /*Hacemos que el contador se multiplique por 3 hasta llegar a 20 y despues imprima el resultado*/
    {
        resultado=n*cont;
       printf("%d, ",resultado);
    }

    return 0;
}
/* Trabajo Realizado por Roberto Ulloa*/
