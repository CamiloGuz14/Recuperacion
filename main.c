#include <stdio.h>

int main() {
    int num_clientes, edad;
    int total_ninos = 0, total_adultos = 0, total_tercera_edad = 0;

    
    int precio_nino = 3;
    int precio_adulto = 7;
    int precio_tercera_edad = 3;

    
    printf("Ingrese el numero de clientes: ");
    scanf("%d", &num_clientes);
    

    
    if (num_clientes >= 1) {
        printf("Ingrese la edad del cliente 1: ");
        scanf("%d", &edad);
        if (edad >= 1 && edad <= 11) {
            total_ninos += precio_nino;
        } else if (edad >= 12 && edad <= 64) {
            total_adultos += precio_adulto;
        } else if (edad >= 65) {
            total_tercera_edad += precio_tercera_edad;
        }
    }

    
    if (num_clientes >= 2) {
        printf("Ingrese la edad del cliente 2: ");
        scanf("%d", &edad);
        if (edad >= 1 && edad <= 11) {
            total_ninos += precio_nino;
        } else if (edad >= 12 && edad <= 64) {
            total_adultos += precio_adulto;
        } else if (edad >= 65) {
            total_tercera_edad += precio_tercera_edad;
        }
    }

    
    if (num_clientes >= 3) {
        printf("Ingrese la edad del cliente 3: ");
        scanf("%d", &edad);
        if (edad >= 1 && edad <= 11) {
            total_ninos += precio_nino;
        } else if (edad >= 12 && edad <= 64) {
            total_adultos += precio_adulto;
        } else if (edad >= 65) {
            total_tercera_edad += precio_tercera_edad;
        }
    }

   
    if (num_clientes >= 4) {
        printf("Ingrese la edad del cliente 4: ");
        scanf("%d", &edad);
        if (edad >= 1 && edad <= 11) {
            total_ninos += precio_nino;
        } else if (edad >= 12 && edad <= 64) {
            total_adultos += precio_adulto;
        } else if (edad >= 65) {
            total_tercera_edad += precio_tercera_edad;
        }
    }

    
    printf("\nTotal para ninos: %d$\n", total_ninos);
    printf("Total para adultos: %d$\n", total_adultos);
    printf("Total para tercera edad: %d$\n", total_tercera_edad);

   
    int total_general = total_ninos + total_adultos + total_tercera_edad;
    printf("El valor total de las entradas es: %d$\n", total_general);

    return 0;
}
