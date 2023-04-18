#include <stdio.h>

/* Esta función recibe un número entero y devuelve 1 si es primo, 0 en caso contrario. */
int es_primo(int num) {
    /* Si el número es menor que 2, no es primo. */
    if (num < 2) return 0;
    /* Para verificar si el número es primo, se divide por todos los números desde 2 hasta la raíz cuadrada de num.
       Si en algún momento el residuo de la división es 0, el número no es primo. */
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    /* Si no se encontró ningún divisor entre 2 y la raíz cuadrada de num, entonces num es primo. */
    return 1;
}

int main() {
    int num, suma = 0;
    /* Se pide al usuario que ingrese un número entero. */
    printf("Ingrese un número entero: ");
    scanf("%d", &num);
    /* Se calcula la suma de los dígitos del número utilizando un ciclo while y la operación módulo (%). */
    while (num > 0) {
        suma += num % 10;
        num /= 10;
    }
    /* Se imprime un mensaje indicando si la suma de los dígitos es un número primo o no utilizando un operador ternario. */
    printf("La suma de los dígitos (%d) %s es un número primo.\n", suma, es_primo(suma) ? "" : "no");
    return 0;
}
