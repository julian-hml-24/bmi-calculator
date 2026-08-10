/*
Programa para calcular el Indice de Masa Corporal (IMC) del usuario.
Solicita peso en kilogramos y altura en metros.
Luego aplica la fórmula: IMC = peso / (altura * altura).
Finalmente muestra el resultado numérico junto con una tabla de referencia
para que el usuario pueda interpretar su IMC, e indica en qué categoría se encuentra.
*/

#include <stdio.h>

   int main(void)
{
    int peso = 0;
    float altura = 0.0f; 
    float indice = 0.0f;

    
    do {
        printf("Ingrese su peso (kg): \n");
        scanf("%d", &peso);
        if (peso <= 0) {
            printf("No se permiten números negativos ni cero. Intente de nuevo.\n");
        }
    } while (peso <= 0);

    
    do {
        printf("Ingrese su altura (m): \n");
        scanf("%f", &altura);
        if (altura <= 0.0f) {
            printf("No se permiten números negativos ni cero. Intente de nuevo.\n");
        }
    } while (altura <= 0.0f);

    indice = peso/(altura*altura);
    printf("Su indice es: %.2f\n", indice);

    printf("Ubique su indice entre estos valores:\n");
    printf("|   Indice < 16   |= Malo |\n");
    printf("|-----------------|-------|\n");
    printf("| 16 < Indice < 25|= Bien |\n");
    printf("|-----------------|-------|\n");
    printf("|   25 < Indice   |= Malo |\n");
    printf("|-----------------|-------|\n");

    printf("Según la tabla, usted se encuentra en la categoría: ");
    if (indice < 16)
        printf("Malo (IMC < 16)\n");
    else if (indice > 16 && indice < 25)
        printf("Bien (16 < IMC < 25)\n");
    else if (indice > 25)
        printf("Malo (IMC > 25)\n");
    else
        printf("límite (IMC = 16 o 25, no definido en la tabla)\n");

    return 0;

}
