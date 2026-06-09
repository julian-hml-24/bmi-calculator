/*
Programa para calcular el Indice de Masa Corporal (IMC) del usuario.
Solicita peso en kilogramos y altura en metros.
Luego aplica la fórmula: IMC = peso / (altura * altura).
Finalmente muestra el resultado numérico junto con una tabla de referencia
para que el usuario pueda interpretar su IMC.
*/

#include <stdio.h>

int main(void)
{
    int peso = 0;
    float altura = 0; 
    float indice = 0;

    printf("Ingrese su peso (kg): \n");
    scanf ("%d",&peso);

    printf("Ingrese su altura (m): \n");
    scanf ("%f",&altura);

    indice = peso/(altura*altura);
    printf("Su indice es: %.2f\n", indice);

    printf("Ubique su indice entre estos valores:\n");
    printf("|   Indice < 16   |= Malo |\n");
    printf("|-----------------|-------|\n");
    printf("| 16 < Indice < 25|= Bien |\n");
    printf("|-----------------|-------|\n");
    printf("|   25 < Indice   |= Malo |\n");
    printf("|-----------------|-------|\n");

    return 0;
}