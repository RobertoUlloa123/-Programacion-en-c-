#include <stdio.h>

int main()
{
    /*Serie Fibonacci entre el 0 y 100*/
    int n1=0, n2=1, n3;
    printf("%d, %d, ",n1,n2);
    /*Hacemos un do while para que pimero ejecute y luego evalue */
    do
    {
        /*sumamos n1+n2 que seria 0+1 que nos daria como resultado 1 ese 1 es nuestro n3*/
        n3=n1+n2;
        printf("%d, ",n3);
        /*Pero debemos de remplazar las variables, con lo que antes fue n1 ahora sera n2 y lo de n2 sera n3
        ya que no queremos que este sumando a cada ratto el n1 y n2*/
        n1=n2;
        n2=n3;
        
        
    }while (n2<55); /*en la condicion debemos de poner que se repita hasta que n2<55
        un numero antes del 89
        la orden dice entre 0 a 100 pero al sumar 89+55 da como resultado 144 y no se estaria 
        cumpliendo con el enunciado*/
    return 0;
}
/*Trabajo realizado por Roberto Ulloa*/