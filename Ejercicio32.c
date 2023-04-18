#include <stdio.h>

int main()
{
    /* Definimos las variables n, primo, suma, cont y promedio */
    int n, primo, suma = 0, cont = 0;
    float promedio;

    /* Iniciamos un ciclo "do-while" para pedir números hasta que se ingrese un 0 */
    do
    {
        printf("Ingrese un número entero positivo: ");
        scanf("%d", &n);

        /* Si el número ingresado es negativo, el programa lo indica y sale del ciclo */
        if(n<0)
        {
            printf("Es un numero negativo\n");
            break;
        } 
        /* Si el número ingresado es 0, se sale del ciclo */
        else if (n == 0)
        {
            break;
        }

        /* Se determina si el número ingresado es primo o no */
        primo = 1;
        for (int i = 2; i <= n / 2; i++) 
        {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }

        /* Si el número es primo y no es 1, se suma a la variable suma y se incrementa el contador cont */
        if(n!=1 && primo)
        {
            suma = suma + n;
            cont++;
            promedio = (float)suma / cont; /*se calcula el promedio*/
        }
    } while (n != 0); /*El ciclo se repetirá hasta que el usuario ingrese 0*/ 

    /* Se imprime el promedio de los números primos ingresados, con dos decimales */
    printf("El promedio de los números primos ingresados es: %.2f\n", promedio);

    return 0; 
}    
