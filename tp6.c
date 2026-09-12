#include <stdio.h>

double calcularAreaRectangulo(double longitud, double altura);
double calcularPerimetroRectangulo(double longitud, double altura);
double calcularAreaCirculo(double radio);
double calcularPerimetroCirculo(double radio);
void imprimirResultados(double area, double perimetro);

int main(void) {
    double longitud, altura, radio;
    int respuesta;
    do {  
        printf("Ingrese 1 para calcular del rectangulo, o 2 para el circulo: ");
        scanf("%d", &respuesta);
        if (respuesta != 1 && respuesta != 2) 
            printf("Opcion invalida. Vuelve a intentar.\n");
        }
        while (respuesta != 1 && respuesta != 2);

    if (respuesta == 1){
        printf("Opcion de rectangulo seleccionada.\n");
        do {
            printf("Ingrese la longitud del rectangulo: ");
            scanf("%lf", &longitud);
            if (longitud <= 0) {
                printf("No se permiten números negativos ni cero. Intente de nuevo.\n");
            }
        } while (longitud <= 0);
        do {
            printf("Ingrese la altura del rectangulo: ");
            scanf("%lf", &altura);
            if (altura <= 0) {
                printf("No se permiten números negativos ni cero. Intente de nuevo.\n");
            }
        } while (altura <= 0);
        printf("\nResultados del rectangulo:\n");
        imprimirResultados(
            calcularAreaRectangulo(longitud, altura),
            calcularPerimetroRectangulo(longitud, altura)
        );
    } 

    if (respuesta == 2){
        printf("Opcion de circulo seleccionada.\n");
        do {
            printf("Ingrese el radio del circulo: ");
            scanf("%lf", &radio);
            if (radio <= 0) {
                printf("No se permiten números negativos ni cero. Intente de nuevo.\n");
            }
        } while (radio <= 0);
        printf("\nResultados del circulo:\n");
        imprimirResultados(
        calcularAreaCirculo(radio),
        calcularPerimetroCirculo(radio)
        );
    }     

    return 0;
}

double calcularAreaRectangulo(double longitud, double altura) {
    return longitud * altura;
}

double calcularPerimetroRectangulo(double longitud, double altura) {
    return 2 * (longitud + altura);
}

double calcularAreaCirculo(double radio) {
    return 3.14159 * radio * radio;
}

double calcularPerimetroCirculo(double radio) {
    return 2 * 3.14159 * radio;
}

void imprimirResultados(double area, double perimetro) {
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
}