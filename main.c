#include <stdio.h>
#include <stdlib.h>

int sumar(int, int);

int main()
{

    int suma;
    int numeroUno;
    int numeroDos;

    printf("ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = sumar(numeroUno , numeroDos);

    printf (" el resultado es : %d", suma );

    return 0;
}
  int sumar(int numeroUno, int numeroDos)
{
    int suma;

    suma = numeroUno + numeroDos;

    return suma;

}
