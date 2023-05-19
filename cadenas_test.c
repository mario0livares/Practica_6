#include <stdio.h>
#include "cadenas.h"
int main() {
char cadena[100];
char caracter;
int posicion;
printf("Ingrese una cadena de texto: ");
scanf("%s", cadena);
printf("Ingrese el caracter a buscar: ");
scanf(" %c", &caracter);
posicion = buscar(caracter, cadena);
if (posicion == -1) {
printf("El caracter no se encuentra en la cadena.\n");

} else {
printf("El caracter se encuentra en la posición %d de la

cadena.\n", posicion);
}
return 0;
}
