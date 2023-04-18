#include <stdio.h>  

int main() {  
    int num = 0;  
    int par = 1;  

    while (num <= 7) {  /* Inicio del ciclo while, que se ejecutará mientras la variable num sea menor o igual a 7*/
        for (int i = 0; i < 1; i++) {  /*Inicio del ciclo for, que se ejecutará 
                                        una sola vez en cada iteración del ciclo while*/ 
            printf("%d\t%d\n", num, par);  /*Imprime en pantalla los valores de las variables 
                                            num y par, separados por un tabulador y seguidos de un salto de línea*/ 
        }
        num++;  /* Incrementa la variable num en 1*/
        if (num % 4 == 0) {  /*Si el residuo de la división de num entre 4 es igual a 0*/
            par++;  /*Incrementa la variable par en 1*/ 
        }
    }

    return 0; 
}
