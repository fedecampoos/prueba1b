#include <stdio.h>
#include <stdlib.h>
int pedirNumero(char []);

int main()
{
    int numero;
    int nota;
    int legajo;
    int edad;

    legajo=pedirNumero("ingrese un legajo: ");

    nota = pedirNumero("ingrese una nota");

    edad = pedirNumero("ingrese la edad");



    return 0;
}
    int pedirNumero(char texto[])
    {
        int numero ;
        printf("%s", texto);
        scanf("&d", &numero);

        return numero;

    }
