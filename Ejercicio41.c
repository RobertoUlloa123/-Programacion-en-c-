#include <stdio.h>

int main()
{
    /*Serie Fibonacci entre el 0 y 100*/
    int n1=0, n2=1, n3;
    printf("%d, %d, ",n1,n2);
    
    do
    {
        n3=n1+n2;
        printf("%d, ",n3);
        n1=n2;
        n2=n3;
        
    }while (n2<89);

    return 0;
}
