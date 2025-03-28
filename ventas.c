#include <stdio.h>
 
int main() {
    int  stock, cantidad, opcion, venta;
    float precio, total_ganancias = 0;
    char nombre[30], id[30];
    int val;
 
    // Registro del producto
   
    do {
        printf("\nMenú de Opciones:\n");
        printf("1. Registrar producto \n");
        printf("1. Vender producto\n");
        printf("2. Reabastecer producto\n");
        printf("3. Mostrar información del producto\n");
        printf("4. Mostrar total de ganancias\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
 
        switch(opcion) {
            case 1:
                printf("Ingrese el ID del producto: ");
                scanf("%d", &id);
 
                printf("Ingrese el nombre del producto: ");
                fflush(stdin);
                fgets(nombre, 30, stdin);
 
                printf("Ingrese la cantidad inicial en stock: ");
                scanf("%d", &stock);
 
                printf("Ingrese el precio unitario del producto: ");
                scanf("%f", &precio);
 
                break;
            case 2:
            do
            {
                printf("Ingrese la cantidad ");
            } while (stock<1|| val !=1);
           
                printf("Ingrese la cantidad a vender: ");
                scanf("%d", &cantidad);
 
                venta= cantidad * precio;
                stock-=cantidad;
                total_ganancias+=venta;
 
 
               
               
                break;
 
            case 3:
                printf("Ingrese la cantidad a agregar al stock: ");
                scanf("%d", &cantidad);
                stock+=cantidad;
               
               
                break;
 
            case 4:
                printf("\nInformación del producto:\n");
                printf("ID: %d\n", id);
                printf("Nombre: %s", nombre);
                printf("Stock disponible: %d\n", stock);
                printf("Precio unitario: %.2f\n", precio);
                break;
 
            case 5:
                printf("Total de ganancias: $%.2f\n", total_ganancias);
                break;
 
            case 6:
                printf("Saliendo del programa...\n");
                break;
 
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 6);
 
    return 0;
}